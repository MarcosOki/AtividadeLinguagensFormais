#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
	float queijo = 0.05, presunto = 0.05, carne = 0.1, quantidade_hamburguer, kgQ, kgP, kgC;
	
	printf("Informe quantas uniadades de hamburgueres devem ser preparadas: ");
	scanf("%f", &quantidade_hamburguer);
	
	kgQ = queijo*quantidade_hamburguer*2;
	kgP = presunto*quantidade_hamburguer;
	kgC = carne*quantidade_hamburguer;
	
	printf("\nSerão necessários:\n%.2f Quilos de queijo\n%.2f Quilos de Presunto\n%.2f Quilos de Carne\n", kgQ, kgP, kgC);
	
	
	return 0;
}