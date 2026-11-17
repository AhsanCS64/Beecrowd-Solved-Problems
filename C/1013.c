#include <stdio.h>

int main(){

int a,b,s,major,major1;
scanf("%d%d%d",&a,&b,&s);
major=(a+b+abs(a-b))/2;
major1=(major+s+abs(major-s))/2;
printf("%d eh o maior\n",major1);
return 0;
}
