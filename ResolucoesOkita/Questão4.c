//A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo 
//para ler as dimensões de um terreno e depois exibir a área do terreno
#include <stdio.h>
#include <stdlib.h>

int main(void){
  float comprimento,altura,area;
  printf("Comprimento: ");
  scanf("%f", &comprimento);
  printf("Altura: ");
  scanf("%f", &altura);
  area = comprimento*altura;
  printf("A area total do terreno é de: %.2f" , area);
  return 0;
}