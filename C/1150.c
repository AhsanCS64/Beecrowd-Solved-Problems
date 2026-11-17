#include <stdio.h>

int main() {
    int x, z;
    scanf("%d", &x);
    scanf("%d", &z);

    while (z <= x) {
        scanf("%d", &z);
    }

    int sum = 0;
    int cnt = 1;

    for (int i = x; i < z; i++) {
        sum += i;

        if (sum < z) {
            cnt += 1;
        }
    }

    printf("%d\n", cnt);

    return 0;
}