#include <stdio.h>

int main(){
float a;
scanf("%f",&a);

if(a>=0 && a<=2000)
{printf("Isento\n");}
else if(a>2000 && a<=3000)
{
    a=(a-2000)*0.08;
    printf("R$ %.2f\n",a);
}
else if(a>3000 && a<=4500)
{
 a=(a-3000)*0.18+(1000)*0.08;
 printf("R$ %.2f\n",a);
}
else if(a>4500)
{
 a=(a-4500)*0.28+(1500)*0.18+(1000)*0.08;
 printf("R$ %.2f\n",a);
}
return 0;
}

