/* Cálculo da média e da variância de 10 número reais */

#include<stdio.h>

int main(void) {
  float v[10];          /*Declara vetor com 10 elementos*/
  float med, var;       /*Variaveis para armazenar a média e a variância*/
  int i;                /*Variavel usada como indice do vetor*/

  /* Leitura dos valores*/
  for (i = 0; i < 10; i++) {  /*Faz o índice variar de 0 a 9*/
    scanf("%f", &v[i]);       /*Lê cada elemento do vetor*/
  }

  /*Calculo da média*/
  med = 0.0;
  for (i = 0; i < 10; i++)
    med = med + v[i];
  med = med / 10;

  /*Calculo variância*/
  var = 0.0;
  for (i = 0; i < 10; i++)
    var = var + (v[i] - med * (v[i] - med));
  var = var / 10;

  printf("Média = %f\tVariância = %f  \n", med, var);
  return 0;
}
