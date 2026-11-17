#include <stdio.h>

int main(){
int N,min,k;
scanf("%d",&N);

int X[N];

for(int i=0;i<N;i++){
    scanf("%d",&X[i]);
}

min=X[0];

for(int i=0;i<N;i++){
    if(min>X[i]){min=X[i];k=i;}
}
printf("Menor valor: %d\n",min);
printf("Posicao: %d\n",k);

return 0;
}