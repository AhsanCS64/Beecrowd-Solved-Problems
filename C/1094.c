#include <stdio.h>

int main(){
int tc,Amount,C=0,R=0,S=0,total;
char Type;
scanf("%d",&tc);

for (int i=0;i<tc;i++)
{scanf("%d %c",&Amount,&Type);
  if(Type=='C')
  {
      C+=Amount;
  }
  if(Type=='R')
  {
      R+=Amount;
  }
  if(Type=='S')
  {
      S+=Amount;
  }
 }
 total=S+R+C;
printf("Total: %d cobaias\n",total);
printf("Total de coelhos: %d\n",C);
printf("Total de ratos: %d\n",R);
printf("Total de sapos: %d\n",S);

printf("Percentual de coelhos: %.2f %%\n",((float)C*100)/(float)total);
printf("Percentual de ratos: %.2f %%\n",((float)R*100)/(float)total);
printf("Percentual de sapos: %.2f %%\n",((float)S*100)/(float)total);

return 0;

}
