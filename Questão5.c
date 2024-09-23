// A padaria Hotpão vende uma certa quantidade de pães franceses e uma 
// quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 
// 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães 
// e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total 
// arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base 
// nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois 
// calcular os dados solicitados
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    float valor_broa,valor_pao,quant_broa,quant_pao,total,poupanca;
    valor_pao = 0.12;
    valor_broa = 1.50;
    printf("Quantidade de broas vendidas hoje: ");
    scanf("%f", &quant_broa);
    printf("Quantidade de pãos vendidos hoje: ");
    scanf("%f",&quant_pao);
    total = (quant_broa * valor_broa) + (quant_pao * valor_pao);
    poupanca = total * (10.0/100);
    printf("O lucro total do dia foi de: %.2f e o dono da padoca deve depositar: %.2f na poupança",total,poupanca);            
    return 0;   
}
//Já volto
