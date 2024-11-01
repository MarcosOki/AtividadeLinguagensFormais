#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
	float n1, n2, n3, media;
	
	printf("Insira a primeira nota do aluno: ");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota do aluno: ");
	scanf("%f", &n2);
	
	printf("Insira a terceira nota do aluno: ");
	scanf("%f", &n3);
	
	media = (n1*2 + n2*3 + n3*5) / 10;
	
	printf("\nA media ponderada das notas acima é %.2f\n", media);
	
	return 0;
}