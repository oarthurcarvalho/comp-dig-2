/* Programa para conversão de temperatura */

#include <stdio.h>

/* Função auxiliar */
float converte (float c)
{
  float f;
  f = 1.8 * c + 32;
  return f;
}

/* Função principal */
int main()
{
  /* Declaração das variáveis*/
  float t1;
  float t2;

  /* mostra mensagem para usuário */
  printf("Digite a temperatura em Celsius: ");

  /* captura valor entrado via teclado */
  scanf("%f",&t1);

  /* faz a conversão, chamando função auxiliar */
  t2 = converte(t1);

  /* exibe resultado */
  printf("Temperatura em Fahrenheit: %f\n", t2);
  return 0;
}
