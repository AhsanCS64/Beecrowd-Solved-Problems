#include <stdio.h>

int main(){
int cp1,cp2,up1,up2;
float ppu1,ppu2;

scanf("%d%d%f",&cp1,&up1,&ppu1);
scanf("%d%d%f",&cp2,&up2,&ppu2);

ppu1=up1*ppu1;
ppu2=up2*ppu2;
ppu1=ppu1+ppu2;

printf("VALOR A PAGAR: R$ %.2f",ppu1);
printf("\n");




}
