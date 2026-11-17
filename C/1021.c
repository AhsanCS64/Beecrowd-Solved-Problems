#include <stdio.h>

int main(){
int a,banknote[6]={100,50,20,10,5,2},money[7],i,j;
int coinote[6]={100,50,25,10,5,1},coin[6];
float N,sum=0;
scanf("%f",&N);
printf("NOTAS:\n");
a=N;

for (i=0;i<6;i++)
{ money[i]=a/banknote[i];
  a=a%banknote[i];}

for(i=0;i<6;i++)
{ printf("%d nota(s) de R$ %d.00\n",money[i],banknote[i]);
  sum=sum+banknote[i]*money[i];}

printf("MOEDAS:\n");



N=N-sum+0.001;
a=N*100;

for (j=0;j<6;j++)
{coin[j]=a/coinote[j];
  a=a%coinote[j];}


for (j=0;j<6;j++)
{printf("%d moeda(s) de R$ %.2f\n",coin[j],(float)coinote[j]/100);}

return 0;
}
