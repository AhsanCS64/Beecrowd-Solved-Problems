#include <stdio.h>

int main(){
int x,count=0;
float avg,sum=0;
while(1){
    scanf("%d",&x);
    if(x<0) break;
    sum=sum+(float)x;
    count++;
}
avg=(sum)/(float)count;
printf("%.2f\n",avg);
return 0;

}
