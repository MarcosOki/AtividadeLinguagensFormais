#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("===========================\n");
    printf("     Im�bilis retangulares   \n");
    printf("===========================\n");
    int l,c;
    printf("Bem vindo a imobili�ria Im�bilis \n");
    printf(" Digite o comprimento do terreno em metros: ");
    scanf("%d",&c);
    printf(" Digite a largura do terreno em metros: ");
    scanf("%d",&l);
    printf(" A �rea do seu terreno �: %.2d m�",c*l);
    return(0);
}
