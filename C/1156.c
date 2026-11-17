#include <stdio.h>

int main(){
float x=2,t,S=1;
for(int i=3;i<40;i+=2)
{
    S+=(((1.0)*i)/x);
    x*=2;

}

printf("%.2f\n",S);
return 0;
}
