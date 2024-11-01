// A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui 
// duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo 
// que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer 
// pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de 
// sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, 
// presunto e carne necessários para compra

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL,"");

    float peso_kg,sanduiche,quantidade_sanduiche;
    int rodela_hamburguer,fatias_queijo,fatias_presunto,peso_fatia,peso_rodela;

    fatias_queijo = 2;
    fatias_presunto = 1;
    rodela_hamburguer = 1;
    peso_fatia = 50;
    peso_rodela = 100;
    printf("Quantidade de sanduiches: ");
    scanf("%f",&quantidade_sanduiche);
    sanduiche = (fatias_presunto*peso_fatia)+(fatias_queijo*peso_fatia)+(rodela_hamburguer*peso_rodela);
    peso_kg = (sanduiche * quantidade_sanduiche)/1000;
    printf("O peso de um sanduiche é igual a: %.2f \nO peso total dos sanduiches em quilos é: %.2f kg",sanduiche, peso_kg);
    return 0;

}










