#include<stdio.h>

int main(){

    int N;
    int X,Y, aux;
    int sum;
    scanf("%d",&N);

    while(1){
                if(N == 0) break;
                scanf("%d%d",&X,&Y);

                if(X > Y){
                     aux = X;
                     X = Y;
                     Y = aux;
                }
                sum = 0;
                for(int i = X+1; i < Y; i++){
                       if(i%2 != 0) sum += i;
                }
                printf("%d\n",sum);
                N--;
    }
    return 0;
}
