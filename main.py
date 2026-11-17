import argparse
from pathlib import Path
import sys
from time import sleep

from selenium import webdriver
from selenium.common.exceptions import WebDriverException

from modules.constants import BASE_FOLDER, ExportError, SignInRequired
from modules.login import login
from modules.scrape_answers import scrape_answers
from modules.scrape_source_code import scrape_code, solution_path, write_to_file


def export_solutions(driver, output):
    login(driver)
    submissions = scrape_answers(driver)
    solved = {submission.problem for submission in submissions}
    print(f"Found {len(submissions)} accepted submissions across {len(solved)} problems.", flush=True)

    written = existing = 0
    completed = set()
    failures = {}
    for submission in submissions:
        path = solution_path(output, submission.problem, submission.language)
        if path in completed:
            continue
        if path.is_file():
            existing += 1
        else:
            try:
                sleep(0.5)
                source = scrape_code(driver, submission.id)
                if write_to_file(source, path):
                    written += 1
                    print(f"Saved {path.relative_to(output)}", flush=True)
                else:
                    existing += 1
            except SignInRequired:
                raise
            except (ExportError, OSError) as error:
                failures[path] = f"{path.relative_to(output)} (submission {submission.id})"
                print(f"Could not export {failures[path]}: {error}", file=sys.stderr, flush=True)
                continue

        completed.add(path)
        failures.pop(path, None)

    print(f"Saved {written} files, skipped {existing} existing files. Output: {output}")
    if failures:
        raise ExportError(f"{len(failures)} solution files could not be downloaded. Rerun to retry.")


def main():
    parser = argparse.ArgumentParser(description="Export your accepted Beecrowd solutions.")
    parser.add_argument("--output", type=Path, default=BASE_FOLDER, help="Directory for solution files")
    args = parser.parse_args()

    try:
        driver = webdriver.Chrome()
    except (WebDriverException, OSError) as error:
        print(
            "Could not start Chrome. Install Chrome and update Selenium with "
            "'python -m pip install -r requirements.txt'. "
            "Selenium may need internet access to set up the driver.",
            file=sys.stderr,
        )
        print(getattr(error, "msg", None) or str(error), file=sys.stderr)
        return 1

    try:
        driver.set_page_load_timeout(35)
        export_solutions(driver, args.output.expanduser().resolve())
        return 0
    except KeyboardInterrupt:
        print("Export interrupted. Rerun to continue using the files already saved.", file=sys.stderr)
        return 130
    except (ExportError, WebDriverException, OSError) as error:
        print(f"Export failed: {getattr(error, 'msg', None) or error}", file=sys.stderr)
        return 1
    finally:
        try:
            driver.quit()
        except WebDriverException:
            pass


if __name__ == "__main__":
    sys.exit(main())
