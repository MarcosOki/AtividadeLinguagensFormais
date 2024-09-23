//Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritimo para ler o preço
//do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tamque.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL,"");
  float preco, valor, litros;
  printf("Preço da gasolina: ");
  scanf("%f",&preco);
  printf("valor do pagamento: ");
  scanf("%f",&valor);
  litros = valor/preco;
  printf("o preço do litro da gasolina é: %.2f e o valor do abastecimento foi de: %.2f \n Logo, você abasteceu: %.2f litros",preco,valor,litros);
  return 0;
}