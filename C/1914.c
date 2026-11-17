#include <stdio.h>

int main(){

int i,j,n,k,t,sum;
char p1[20],p2[20],c1[20],c2[20];
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%s %s %s %s",&p1,&c1,&p2,&c2);
    scanf("%d%d",&k,&t);
    sum=k+t;
    if(c1[20]=='PAR'){c2[20]='IMPAR';}
    if(c1[20]=='IMPAR'){c2[20]='PAR';}

    if(sum%2==0){
        if(strcmp(c1,"PAR")){printf("%s\n",p2);}
        else {printf("%s\n",p1);}
        }
    if(sum%2!=0){
        if(strcmp(c1,"IMPAR")){printf("%s\n",p2);}
        else {printf("%s\n",p1);}}
        }

}


