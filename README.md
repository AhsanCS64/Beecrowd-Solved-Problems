# Beecrowd Code Downloader

Export your accepted Beecrowd solutions to your computer. The downloader keeps one solution per problem and programming language, starting with the newest accepted submission. It skips existing files when you rerun it. If the newest submission's source is unavailable, it tries older accepted submissions for that same problem and language.

## Run on Windows

Install Python 3.10 or later and Google Chrome. Open PowerShell in this project folder and run:

```powershell
python -m venv .venv
.\.venv\Scripts\python.exe -m pip install -r requirements.txt
.\.venv\Scripts\python.exe main.py
```

Sign in to Beecrowd in the Chrome window that opens. The export starts once sign-in succeeds. Selenium manages ChromeDriver and may need internet access on the first run. On macOS or Linux, use `.venv/bin/python` after creating the virtual environment.

## Files

By default, solutions are saved under `URI-Source-Codes`, next to `main.py`. For example, a C++ solution for problem 1001 is saved as `URI-Source-Codes/C++/1001.cpp`. Unknown languages are saved as text under `Other`.

To choose a different folder:

```powershell
.\.venv\Scripts\python.exe main.py --output "K:\Beecrowd\My Solutions"
```

Rerun the same command after an interrupted export or any reported errors. You can use the resulting folder as your local Git repository.

Original downloader by Luan Simões (Snizi).
