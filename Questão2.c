//Faça um algoritimo que leia 3 notas de um aluno e calcule a média final 
//deste aluno. Considere que a média é ponderada e que o peso são respectiva-
//mente: 2,3 e 5.

#include <stdio.h>
#include <stdlib.h>
int main(void){
  float nota1,nota2,nota3,mediaP;
  printf("Digite a nota das 3 avaliações em sequência: ");
  scanf("%f",&nota1);
  scanf("%f",&nota2);
  scanf("%f",&nota3);

  mediaP = ((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);
  printf("%.1f ",mediaP);

  return 0;
}
