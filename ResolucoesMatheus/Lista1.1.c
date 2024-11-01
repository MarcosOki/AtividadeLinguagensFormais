#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
	float valorCompra, valorGaso, litrosTotais;
	
	printf("Digite o valor do litro da gasolina: R$");
	scanf("%f", &valorGaso);
	
	printf("Digite o valor a ser gasto para reabastecimento: R$");
	scanf("%f", &valorCompra);
	
	litrosTotais = valorCompra/valorGaso;
	
	printf("\nForam colocados %.2f litros de gasolina no veiculo.\n", litrosTotais);
	return 0;
}