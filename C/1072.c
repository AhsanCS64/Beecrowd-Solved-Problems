#include <stdio.h>

int main(){
int N,X,incount=0,outcount=0;
scanf("%d",&N);
for(int i=0;i<N;i++)
{
scanf("%d",&X);
if(X>=10 && X<=20)
{incount++;}
if(X<10 || X>20)
{outcount++;}

}
printf("%d in\n",incount);
printf("%d out\n",outcount);
return 0;
}
