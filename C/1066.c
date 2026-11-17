#include <stdio.h>
int main(){
int n,count=0,countodd=0,countp=0,countn=0;

for(int i=0;i<=4;i++)
{
    scanf("%d",&n);
    if (n%2==0)
    {count++;}



    if (n%2!=0)
    {countodd++;}

    if (n>0)
    {countp++;}

    if (n<0)
    {countn++;}
}

printf("%d valor(es) par(es)\n",count);
printf("%d valor(es) impar(es)\n",countodd);
printf("%d valor(es) positivo(s)\n",countp);
printf("%d valor(es) negativo(s)\n",countn);
return 0;
}