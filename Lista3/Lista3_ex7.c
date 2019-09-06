#include <stdio.h>
#include <math.h>

double aproxSqrt(double n){
    double xi, xii;
    double tol = 0.001;
    xi = 1;
    do {
        xii = 0.5 * (xi + (n / xi));
        xi = xii;
    } while (abs(pow(xi,2) - n) > tol);
      return xi;
    }

int main(void) {
  double in, out;
  printf("Entre com um número real: ");
  scanf("%lf", &in);
  out = aproxSqrt(in);
  printf("A raiz quadrada aproximada de %4.2lf é %4.2lf.\n", in, out);
  return 0;
}
