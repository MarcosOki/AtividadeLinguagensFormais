//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a 
//percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
//Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, 
//escrever um algoritmo que leia o custo de fábrica de um carro e escreva o 
//custo ao consumidor.
#include <stdio.h>
#include <stdlib.h>
int main(void){
  float custo_fabrica,custo_total,distribuidor,impostos;
  printf("Custo de fábrica: ");
  scanf("%f",&custo_fabrica);
  distribuidor = custo_fabrica * (28.0/100);
  impostos = custo_fabrica * (45.0/100);
  custo_total = custo_fabrica + impostos + distribuidor;
  printf("Custo de fabrica: %.2f\nValor em impostos: %.2f\nValor da distribuidora: %.2f\nPreço Total: %.2f",custo_fabrica,impostos,distribuidor,custo_total);
  
  return 0;
}

