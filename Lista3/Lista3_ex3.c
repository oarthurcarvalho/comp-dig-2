#include<stdio.h>
#include<math.h>

int raizes(double a, double b, double c, double *x1, double *x2){
  int numeroRaizes;
  double delta = (pow(b,2) - (4 * a * c));

  if (delta > 0)
  {
    numeroRaizes = 2;
  }
  else if (delta == 0) {
    numeroRaizes = 1;
  }
  else{
    numeroRaizes = 0;
  }
  *x1 = (-b + sqrt(delta)) / (2.0 * a);
  *x2 = (-b - sqrt(delta)) / (2.0 * a);
  return numeroRaizes;
}

int main() {
  double a, b, c;
  double *x1, *x2;
  double primeiraRaiz, segundaRaiz;
  int raiz_count;

  x1 = &primeiraRaiz;
  x2 = &segundaRaiz;

  printf("Digite os valores dos coeficientes da equação: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  raiz_count = raizes(a, b, c, x1, x2);
  printf("A equação tem %d raíz(es) que são x1 = %4.3f e x2 = %4.3f\n", raiz_count, primeiraRaiz, segundaRaiz);
  return 0;
}
