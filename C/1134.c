#include <stdio.h>

int main(){
int a,alchohol=0,gasoline=0,diesel=0;
printf("MUITO OBRIGADO\n");
while(1){

    stage1: scanf("%d",&a);
    if(a<1 || a>4){goto stage1;}
    if(a==4){break;}
    if(a>=1 && a<=3)
    {
       if(a==1){alchohol++;}
       if(a==2){gasoline++;}
       if(a==3){diesel++;}
    }


}
printf("Alcool: %d\n",alchohol);
printf("Gasolina: %d\n",gasoline);
printf("Diesel: %d\n",diesel);
return 0;

}