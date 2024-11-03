#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("===========================\n");
    printf("        Gasolina litrada\n");
    printf("===========================\n");
	 int d;
    float L,D;
    const float pg=6.09;
    printf("Quanto você gostaria de colocar de gasolina: R$  ");
    scanf("%f",&D);
    L=D/pg;
     do{
    printf("\n\nQual sua forma de pagamento? \n");
    printf("(digite 1 para Dinheiro ou 2 Cartão) ");
    scanf("%d",&d);
    if(d==1) {
    	printf("............................");
    	printf("\nPagamento  no dinheiro recebido.\n");
	} else if (d==2){
			printf("............................");
		printf("\nPagamento  no cartão recebido.\n");
	} else {
			printf("Erro na forma de pagamento, tente novamente.\n\n");
	} } while (d != 1 && d != 2);
	printf("............................");
    printf("\n\n Você colocou %.2f litros",L);
    printf("\n Obrigado pela preferencia!!");
    return(0);
}
