#include <stdio.h>

int main(){

int n,x,y,a=0;
scanf("%d",&n);
for(int i=0;i<n;i++){


    scanf("%d%d",&x,&y);
   {if(x%2==0)x++;}
     for(int j=0;j<y;j++){

                 a+=x;
                 x+=2;
}

printf("%d\n",a);
a=0;
        }

return 0;

}