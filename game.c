//Randomizar inteiros - Feito
//Sistema de ataque e defesa baseado em "aleatoriedade" - Feito
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// int random_jgd(void){
//     int x;
//     srand( (unsigned)time(NULL) );
//     x = (rand() % 10) + 1;
//     return x;
// }


int atacar(int random_jogador,int random_adversario){
    int diferenca;
    if(random_jogador > random_adversario){
        diferenca = random_jogador - random_adversario;
        return diferenca;
    }else if(random_jogador < random_adversario){
        diferenca = 0;
        return diferenca;
    }else if(random_jogador == random_adversario){
        diferenca = 0;
        return diferenca;
    }else{
        printf("Algo deu errado:( ");
    }
}

int defender(int random_jogador,int random_adversario){
    int diferenca;
    if(random_jogador < random_adversario){
        diferenca = random_jogador - random_adversario;
        return diferenca;
    }else if(random_jogador > random_adversario){
        diferenca = 0;
        return diferenca;
    }else if(random_jogador == random_adversario){
        diferenca = 0;
        return diferenca;
    }else{
        printf("Algo deu errado:( ");
    }
}

int main(void){
    setlocale(LC_ALL, "");
    srand( (unsigned)time(NULL) );

    int jogador_vida,adversario_vida,escolha_jogador,random_jogador,random_adversario,resultado;
    jogador_vida = 20;
    adversario_vida = 20;
    while(jogador_vida > 0 && adversario_vida > 0){
        system("cls");
        printf("Escolha uma das opcoes: \n1 - Atacar\n2 - Defender\n> ");
        scanf("%d",&escolha_jogador);
        system("cls");
        if(escolha_jogador == 1){//Atacar
            random_adversario = (rand() % 10)+ 1;
            random_jogador = (rand() % 10) + 1;
            resultado = atacar(random_jogador,random_adversario);
            adversario_vida = adversario_vida - resultado;
            if(resultado > 0){    
                printf("---Obteve sucesso---\nForca do Ataque: %d\nForcaa na defesa: %d\nSeu ataque causou %d de dano.",random_jogador,random_adversario,resultado);
            }else{
                printf("---Seu Ataque Falhou---\nForca do ataque: %d\nForca da defesa: %d\nSeu ataque causou 0 de dano",random_jogador,random_adversario);
            }

        }else if (escolha_jogador == 2){//defender
            random_adversario = (rand() % 10) + 1;
            random_jogador = (rand() % 10) + 1;
            resultado = defender(random_jogador,random_adversario);
            jogador_vida = jogador_vida - resultado;
            if(resultado > 0){
                printf("--Sua defesa falhou\nForca do ataque: %d\nForca da defesa: %d\nVoce recebeu %d de dano:--",random_adversario,random_jogador,resultado);
            }else{
                printf("---Voce denfendeu o ataque---\nForca do ataque: %d\nForca da defesa %d\nVoce recebeu 0 de dano",random_adversario,random_jogador);
            }

        }else if(escolha_jogador == 0){
            printf("saindo...");
            break;
        }else{
            printf("Escolha inválida");
            
        }
        printf("\nVida do jogador: %d\nVida do adversario: %d\n",jogador_vida,adversario_vida);
        system("PAUSE");
    }
}