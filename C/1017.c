#include <stdio.h>

int main(){
int spentime,avgspeed;
float litres;
scanf("%d",&spentime);
scanf("%d",&avgspeed);
litres=((float)spentime*(float)avgspeed)/12;
printf("%.3f",litres);
printf("\n");
return 0;
}
