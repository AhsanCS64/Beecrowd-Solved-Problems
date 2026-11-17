#include <stdio.h>
int main()
{
    double a,b,c,average;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    a=a*2;
    b=b*3;
    c=c*5;
    average=(a+b+c)/(2+3+5);

    printf("MEDIA = %.1lf",average);
    printf("\n");
    return 0;
}

