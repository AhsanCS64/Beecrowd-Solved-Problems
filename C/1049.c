#include <stdio.h>

int main(){
char l1[20],l2[20],l3[20];
scanf("%s",l1);
scanf("%s",l2);
scanf("%s",l3);

if((strcmp(l1,"vertebrado"))==0)
{
    if((strcmp(l2,"ave"))==0)
      {
          if((strcmp(l3,"carnivoro"))==0)
          {printf("aguia\n");}
          else if((strcmp(l3,"onivoro"))==0)
          {printf("pomba\n");}
      }

    else if((strcmp(l2,"mamifero"))==0)
      {
          if((strcmp(l3,"onivoro"))==0)
          {printf("homem\n");}
          else if((strcmp(l3,"herbivoro"))==0)
          {printf("vaca\n");}
      }


}

else if((strcmp(l1,"invertebrado"))==0)
{
    if((strcmp(l2,"inseto"))==0)
      {
          if((strcmp(l3,"hematofago"))==0)
          {printf("pulga\n");}
          else if((strcmp(l3,"herbivoro"))==0)
          {printf("lagarta\n");}
      }

    else if((strcmp(l2,"anelideo"))==0)
      {
          if((strcmp(l3,"hematofago"))==0)
          {printf("sanguessuga\n");}
          else if((strcmp(l3,"onivoro"))==0)
          {printf("minhoca\n");}
      }


}

return 0;
}