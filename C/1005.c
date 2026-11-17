#include <stdio.h>
int main()
{
    double a,b,average;
    scanf("%lf",&a);
    scanf("%lf",&b);
    a=a*3.5;
    b=b*7.5;

    average=(a+b)/(3.5+7.5);

    printf("MEDIA = %.5lf",average);
    printf("\n");
    return 0;
}

