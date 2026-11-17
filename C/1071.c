#include <stdio.h>
int main(){
int n,x,big,smol,add=0;
scanf("%d",&n);
scanf("%d",&x);
if(n>x){big=n;smol=x;}
else {big=x;smol=n;}
for(int i=(smol+1);i<big;i++)
{
    if(i%2!=0)
 {add+=i;}

}
printf("%d\n",add);
return 0;
}