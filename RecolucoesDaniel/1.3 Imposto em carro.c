#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main () {
    setlocale(LC_ALL, "portuguese");
    printf("===========================\n");
    printf("     Faz o L   \n");
    printf("===========================\n");
    float car,i;
    char l;
    printf("\n A porcentagem do distribuidor � de 28 e os impostos de 45\n\n");
    printf(" coloque o custo de fabrica��o do carro: R$ ");
    scanf("%f",&car);
    i=car*(1 + 0.28 + 0.45);
    getchar();
    printf("digite L calmamente:  ");
    scanf("%c",&l);
     if (l=='L'){
    		printf("............................");
    			printf("\n O valor total do carro �: %.2f",i);
    				printf("............................");
	} else {printf("Voc� falhou na miss�o.");
	} return(0);
}
