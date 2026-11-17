#include <stdio.h>

int main(){
int M,N,sum=0,swic;

while(1){
    scanf("%d%d",&M,&N);
    if(M<=0) break;
    if(N<=0) break;

    if(M>N)
    {swic=M;M=N;N=swic;}
    sum=0;
    for(int i=M;i<=N;i++)
    {printf("%d ",i);
     sum+=i;}
     printf("Sum=%d\n",sum);
}
return 0;
}
