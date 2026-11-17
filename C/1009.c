#include <stdio.h>

int main(){

char sname[20];
double salary,sales;
scanf("%s",&sname);
scanf("%lf",&salary);
scanf("%lf",&sales);
sales=(0.15)*(sales);
sales=salary+sales;
printf("TOTAL = R$ %.2lf",sales);
printf("\n");
return 0;
}
