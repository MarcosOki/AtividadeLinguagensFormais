#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
	float unipao, unibroa, pao = 0.12, broa = 1.5, total, poupar;
	
	printf("Quantas unidades de pães foram vendidos? ");
	scanf("%f", &unipao);
	
	printf("Quantas unidades de broas foram vendidas? ");
	scanf("%f", &unibroa);
	
	total = unipao*pao + unibroa*broa;
	poupar = total*0.1;
	
	printf("\nO total arrecadado foi de R$%.2f e a quantia a ser guardade é de R$%.2f\n", total, poupar);	
	
	return 0;
}