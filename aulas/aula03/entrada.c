#include <stdio.h>

int main() {
  char tecla_e; 
  printf("pressione uma tecla:  ");
  scanf("%c",&tecla_e);
  while(getchar() != '\n'); //limpar o buff
  printf("Voce pressionou a tecla '%c'\n" , tecla_e);


int idade;
printf("informe a sua idade:");
scanf("%i",&idade );
 while(getchar() != '\n'); //limpar o buff
printf("Voce tem %i anos\n", idade);


float preço;
printf("informe o preco da gasolina : ");
scanf("%f" , &preço);
while(getchar() != '\n'); //limpar o buff
printf("O preco da gasolina eh R$ %.2f\n",preço);

  return 0;
}