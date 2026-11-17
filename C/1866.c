#include <stdio.h>

int main(){

int i,j,n,c=1,t,sum=0;

scanf("%d",&n);

for(i=0;i<n;i++){
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {sum+=c;
    c*=-1;
    }
    printf("%d\n",sum);
    sum=0;
    c=1;
}
return 0;

}
