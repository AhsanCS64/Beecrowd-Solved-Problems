#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);

    for (int i=0;i<T;i++) {
        int PA, PB;
        double G1, G2;
        scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);

        int countyears = 0;
        while (PA <= PB) {
            PA = PA * (1 + G1 / 100);
            PB = PB * (1 + G2 / 100);
            countyears++;

            if (countyears>100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (countyears <= 100) {
            printf("%d anos.\n",countyears);
        }
    }

    return 0;
}
