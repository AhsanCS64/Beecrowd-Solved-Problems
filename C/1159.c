#include <stdio.h>

int main(){

int n,x,y,a=0;
while(1){
    scanf("%d",&x);
    if(x==0) break;
    if(x%2!=0){x++;}
    for(int i=0;i<5;i++)
    {
        a+=x;
        x+=2;
    }
printf("%d\n",a);
a=0;
}

return 0;

}