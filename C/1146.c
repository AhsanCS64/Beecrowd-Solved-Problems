#include <stdio.h>

int main(){
int X;
while(1){
    scanf("%d",&X);
    if(X==0) break;
    else if(X>0){
          printf("1");
        for(int i=1;i<X;i++){printf(" %d",i+1);}
    }
printf("\n");


}
return 0;

}
