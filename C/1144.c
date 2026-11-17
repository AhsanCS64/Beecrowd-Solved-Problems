#include <stdio.h>

int main(){
int N,i,j,k,l,m;
scanf("%d",&N);

for(i=1;i<=N;i++)
{
    j=i*i;
    k=i*i*i;
    printf("%d %d %d\n",i,j,k);
    l=j+1;
    m=k+1;
    printf("%d %d %d\n",i,l,m);
}
return 0;


}
