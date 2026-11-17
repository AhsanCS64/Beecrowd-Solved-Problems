#include <stdio.h>

int main(){
int N,banknote[7]={100,50,20,10,5,2,1},money[7],a,i;
scanf("%d",&N);
printf("%d\n",N);

for (i=0;i<7;i++)
{ money[i]=N/banknote[i];
  N=N%banknote[i];}

for(i=0;i<7;i++)
{printf("%d nota(s) de R$ %d,00\n",money[i],banknote[i]);}
return 0;
}
