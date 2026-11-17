#include <stdio.h>

int main(){
float score,score1,average,scoreint;

while(1){
    start1: scanf("%f",&score);
    if(score<0 || score>10){printf("nota invalida\n");goto start1;}
    start2: scanf("%f",&score1);
    if(score1<0 || score1>10){printf("nota invalida\n");goto start2;}
        average=(score1+score)/2;
        printf("media = %.2f\n",average);
        break;



        }
        return 0;

}

