#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("======================================================\n");
    printf("        Aluno ponderadoa (peso das notas é 2,3 e 5 ) \n");
    printf("======================================================\n");
    float n1,n2,n3,M;
    printf("Escreva sua primeira nota:  ");
    scanf("%f",&n1);
    printf("Escreva sua segunda nota:   ");
    scanf("%f",&n2);
    printf("Escreva sua terceira nota:   ");
    scanf("%f",&n3);
    M=(n1*2)+(n2*3)+(n3*5);
    printf("A média da sua nota é:  %.1f", M/10);
	return(0);
}
    
