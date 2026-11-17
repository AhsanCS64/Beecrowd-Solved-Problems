#include <stdio.h>

int main(){
float score,score1,rs,average,scoreint;

while(1){
    start1: scanf("%f",&score);
    if(score<0 || score>10){printf("nota invalida\n");goto start1;}
    start2: scanf("%f",&score1);
    if(score1<0 || score1>10){printf("nota invalida\n");goto start2;}
        average=(score1+score)/2;
        printf("media = %.2f\n",average);
        start3: printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f",&rs);
        if(rs==1){goto start1; }
        else if(rs==2){break;}
        else
        {goto start3;}}
        return 0;

}