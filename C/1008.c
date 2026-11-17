#include <stdio.h>

int main(){

int emnum,whour;
float hourly_rate, salary;
scanf("%d",&emnum);
scanf("%d",&whour);
scanf("%f",&hourly_rate);
salary=whour*hourly_rate;
printf("NUMBER = %d\n",emnum);
printf("SALARY = U$ %.2f\n",salary);
}
