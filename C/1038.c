#include <stdio.h>

int main(){
int X,Y;
float price;
scanf("%d%d",&X,&Y);

if (X==1)
{price=((X/X)*4)*Y;
 printf("Total: R$ %.2f\n",price);}
else if (X==2)
{price=((X/X)*4.5)*Y;
 printf("Total: R$ %.2f\n",price);}
else if (X==3)
{price=((X/X)*5)*Y;
 printf("Total: R$ %.2f\n",price);}
else if (X==4)
{price=((X/X)*2)*Y;
 printf("Total: R$ %.2f\n",price);}
else if (X==5)
{price=((X/X)*1.5)*Y;
 printf("Total: R$ %.2f\n",price);}
return 0;
}
