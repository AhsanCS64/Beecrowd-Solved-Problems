#include <stdio.h>

int main(){
int N,i,X;
scanf("%d",&N);

for(i=0;i<N;i++){
    int j=1,k=0;
    scanf("%d",&X);

    for(j;j<X;j++){
        if(X%j==0){k+=j;}

    }

    if(X==k){printf("%d eh perfeito\n",X);}
    else{printf("%d nao eh perfeito\n",X);}
}
return 0;
}