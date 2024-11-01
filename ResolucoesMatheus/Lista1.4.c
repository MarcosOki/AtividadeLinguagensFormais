#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
	float largura, comprimento, area;
	
	printf("Digite a largura do terreno em metros:");
	scanf("%f", &largura);
	
	printf("Digite o comprimento do terreno em metros: ");
	scanf("%f", &comprimento);
	
	area = comprimento * largura;
	
	printf("\nA area do terreno é de %.2fm²\n", area);
	return 0;
}