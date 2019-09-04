#include <stdio.h>
#include<math.h>

double calcularPi(int n){
  double soma = 0;
  for (int i = 0; i <= n; i++) {
    double numerador = pow(-1,i);
    double denominador = 2 * i + 1;
    double result = numerador / denominador;
    soma = soma + result;
  }
  soma = 4 * soma;
  return soma;
}

int main() {
  int n;
  double retorno;
  printf("Digite o número de termos para exibir: ");
  scanf("%d", &n);
  retorno = calcularPi(n);
  printf("A aproximação de pi é: %lf\n", retorno);
  return 0;
}
