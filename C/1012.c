#include <stdio.h>

int main(){
double A,B,C,pi=3.14159,areat,areac,areatra,areas,arear;

scanf("%lf%lf%lf",&A,&B,&C);
areat=(A*C)/2;
areac=pi*C*C;
areatra=((A+B)*C)/2;
areas=B*B;
arear=A*B;

printf("TRIANGULO: %.3lf\n",areat);
printf("CIRCULO: %.3lf\n",areac);
printf("TRAPEZIO: %.3lf\n",areatra);
printf("QUADRADO: %.3lf\n",areas);
printf("RETANGULO: %.3lf",arear);
printf("\n");
return 0;
}
