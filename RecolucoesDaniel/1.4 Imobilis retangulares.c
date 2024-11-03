#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("===========================\n");
    printf("     Imóbilis retangulares   \n");
    printf("===========================\n");
    int l,c;
    printf("Bem vindo a imobiliária Imóbilis \n");
    printf(" Digite o comprimento do terreno em metros: ");
    scanf("%d",&c);
    printf(" Digite a largura do terreno em metros: ");
    scanf("%d",&l);
    printf(" A área do seu terreno é: %.2d m²",c*l);
    return(0);
}
