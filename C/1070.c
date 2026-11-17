#include <stdio.h>

int main(){
int n,nodd=6;
scanf("%d",&n);

for(int i=n;i<n+(nodd*2);i+=2)
{
if(i%2==0)
{printf("%d\n",i+1);}
else
{printf("%d\n",i);}
}
return 0;
}