#include <stdio.h>

int main(){

float s,ns;
scanf("%f",&s);

if(s>0 && s<=400)
{ns=0.15*s;
printf("Novo salario: %.2f\n",ns+s);
printf("Reajuste ganho: %.2f\n",ns);
printf("Em percentual: 15 %%\n");}

else if(s>400 && s<=800)
{ns=0.12*s;
printf("Novo salario: %.2f\n",ns+s);
printf("Reajuste ganho: %.2f\n",ns);
printf("Em percentual: 12 %%\n");}

else if(s>800 && s<=1200)
{ns=0.10*s;
printf("Novo salario: %.2f\n",ns+s);
printf("Reajuste ganho: %.2f\n",ns);
printf("Em percentual: 10 %%\n");}


else if(s>1200 && s<=2000)
{ns=0.07*s;
printf("Novo salario: %.2f\n",ns+s);
printf("Reajuste ganho: %.2f\n",ns);
printf("Em percentual: 7 %%\n");}

else if(s>2000)
{ns=0.04*s;
printf("Novo salario: %.2f\n",ns+s);
printf("Reajuste ganho: %.2f\n",ns);
printf("Em percentual: 4 %%\n");}

return 0;
}
