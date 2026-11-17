#include <stdio.h>

int main(){
int sinter,sgremio,Iwin=0,Swin=0,matches=0,draw=0,restart;

while(1){
    start1: scanf("%d%d",&sinter,&sgremio);
    if(sinter>sgremio){Iwin++;printf("Novo grenal (1-sim 2-nao)\n");matches++;}
    if(sinter<sgremio){Swin++;printf("Novo grenal (1-sim 2-nao)\n");matches++;}
    if(sinter==sgremio){draw++;printf("Novo grenal (1-sim 2-nao)\n");matches++;}
    scanf("%d",&restart);
    if(restart==1){goto start1;}
    else{break;}
}
printf("%d grenais\n",matches);
printf("Inter:%d\n",Iwin);
printf("Gremio:%d\n",Swin);
printf("Empates:%d\n",draw);
if(Iwin>Swin){printf("Inter venceu mais\n");}
else if(Swin>Iwin){printf("Gremio venceu mais\n");}
else
{printf("Não houve vencedor");}
return 0;
}