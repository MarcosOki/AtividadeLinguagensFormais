#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("===========================\n");
    printf("    lanchonete Gostosura  \n");
    printf("===========================\n\n\n");
    const float qp=0.05, h=0.1;
    float H;
    printf("Digite a quantidade de sandu�che que deseja fazer:  ");
    scanf("%f",&H);
    printf("\n\nSera necess�rio %.2f Kg de queijo",H*qp);
    printf("\n-------------------------------------");
    printf("\n\nSera necess�rio %.2f Kg de presunto",H*qp);
    printf("\n------------------------------------ ");
    printf("\n\nSera necess�rio %.2f Kg de carne de hamb�rguer",H*h);
    printf("\n-------------------------------------");
    return(0);
}
