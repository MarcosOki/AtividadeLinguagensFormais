#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("===========================\n");
    printf("  Padaria Hotp�o   \n");
    printf("===========================\n");
    float p,b,pao,broa;
    printf("Digite o total de vendas de P�o hoje: ");
    scanf("%f",&p);
     printf("\nDigite o total de vendas de Broa hoje: ");
    scanf("%f",&b);
    pao=p*0.12;
    broa=b*1.50;
    printf("\nO total de vendas hoje foi: R$ %.2f",pao+broa);
    printf("\nGuarde R$ %.2f dos ganhos na poupan�a ",(pao+broa)/10);
    return(0);
}
