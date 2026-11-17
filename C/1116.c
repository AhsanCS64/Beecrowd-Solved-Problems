#include <stdio.h>

int main(){
int N,X,Y,i=0;
scanf("%d",&N);

while(i<N)
{
    scanf("%d%d",&X,&Y);
    if(X!=0 && Y==0)
    {printf("divisao impossivel\n");}
    else if(X!=0 && Y!=0)
    {printf("%.1f\n",(float)X/(float)Y);}
    else if(X==0)
    {printf("0.0\n");}
i++;
}
return 0;

}
