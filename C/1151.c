#include <stdio.h>

int main(){
int N,i;
int arr[50];
arr[0]=0;
arr[1]=1;
scanf("%d",&N);

for(i=2;i<N;i++)
{
    arr[i]=arr[i-1]+arr[i-2];

}
printf("%d %d",arr[0],arr[1]);
for(i=2;i<N;i++)
{
    printf(" %d",arr[i]);
}

printf("\n");
return 0;
}