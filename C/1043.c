#include <stdio.h>
int main(){
float A,B,C,perimeter,Areatra;
scanf("%f%f%f",&A,&B,&C);

if((A+B)>C&&(A+C)>B&&(C+B)>A)
{
perimeter=A+B+C;
printf("Perimetro = %.1f\n",perimeter);
}
else
{Areatra=0.5*(A+B)*C;
 printf("Area = %.1f\n",Areatra);}
return 0;
}
