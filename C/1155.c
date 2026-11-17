#include <stdio.h>

int main(){
float x,S=0;
for(int i=2;i<=100;i++)
{
    x=1/(float)i;
    S+=x;
}
S+=1;
printf("%.2f\n",S);
return 0;
}