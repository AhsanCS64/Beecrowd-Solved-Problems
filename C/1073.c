#include <stdio.h>

int main(){
int N,i,sq;
scanf("%d",&N);

for(i=2;i<=N;i++)
{
    if(i%2==0)
    {sq=pow(i,2);
     printf("%d^2 = %d\n",i,sq);}
}
return 0;

}