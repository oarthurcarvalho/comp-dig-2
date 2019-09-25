#include <stdio.h>
#include <math.h>

double pot(double x, int k){
  if (k == 0){
    return 1;
  }

  double pow = pot(x, k / 2);

  if ((k % 2) > 0){
    // x é ímpar
    return x * pow * pow;
  }
  // x é par
  return pow * pow;
}

int main() {
  double number, libPow, recursivePow;
  int power;

  printf("Entre com úm operando e uma potência inteira: ");
  scanf("%lf %d", &number, &power);
  libPow = pow(number, power);
  recursivePow = pot(number, power);

  printf("potencia_bib = %3.2lf\npotencia_recursiva = %3.2lf\n", libPow, recursivePow);
  return 0;
}
