#include <stdio.h>

int main(){
int adays,year,month,day;
scanf("%d",&adays);

year=adays/365;
month=(adays-year*365)/30;
day=adays-month*30-year*365;
printf("%d ano(s)\n",year);
printf("%d mes(es)\n",month);
printf("%d dia(s)",day);
printf("\n");
return 0;


}
