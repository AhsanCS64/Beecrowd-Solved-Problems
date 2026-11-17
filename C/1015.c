#include <stdio.h>

int main(){
double x1,x2,y1,y2,Distance;
scanf("%lf%lf",&x1,&y1);
scanf("%lf%lf",&x2,&y2);
x1=(x2-x1)*(x2-x1);
y1=(y2-y1)*(y2-y1);
x2=x1+y1;
Distance=sqrt(x2);
printf("%.4lf",Distance);
printf("\n");
return 0;


}
