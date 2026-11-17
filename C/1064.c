#include<stdio.h>

int main(){
float i,a,sum=0;;
int count=0;

for(i=0;i<6;i++)
{scanf("%f",&a);
  if(a>0)
    {count++;
     sum+=a;
     }
  }
sum/=count;
printf("%d valores positivos\n",count);
printf("%.1f\n",sum);
return 0;
}
