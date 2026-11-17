#include <stdio.h>

int main(){
int i,X[10],k;
scanf("%d",&k);

for(i=0;i<10;i++){
    if(i==0){printf("N[%d] = %d\n",i,k); continue;}
    k*=2;
    printf("N[%d] = %d\n",i,k);
}

return 0;
}
