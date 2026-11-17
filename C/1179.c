#include <stdio.h>

int main()
{
int par[5],impar[5],i,j,k,n,count=15,cpar=0,cimpar=0;
for(i=0;i<15;i++){

    scanf("%d",&n);
    if(n%2==0){
        par[cpar]=n;
        cpar++;
    }
    else {
        impar[cimpar]=n;
        cimpar++;
    }

    if(cpar==5){for(j=0;j<5;j++)
        {
         printf("par[%d] = %d\n",j,par[j]);
        }
        cpar=0;
    }

    if(cimpar==5){for(j=0;j<5;j++)
        {
         printf("impar[%d] = %d\n",j,impar[j]);
        }
        cimpar=0;
    }

    }

for(i=0;i<cimpar;i++){

    printf("impar[%d] = %d\n",i,impar[i]);
}

for(i=0;i<cpar;i++){

    printf("par[%d] = %d\n",i,par[i]);
}



}