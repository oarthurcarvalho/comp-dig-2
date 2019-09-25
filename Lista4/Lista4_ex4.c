#include <stdio.h>
#include <math.h>

int coeficiente(int n, int k){
  if((n >= 0) && (k == 0 || k == n)){
      return 1;
  } else if (k > 0 && n > k){
      return (coeficiente(n - 1, k) + coeficiente(n - 1, k - 1));
  }
}

int main() {
  int n, k, coef;
  printf("Entre com dois números inteiros positivos separados por espaço.\n");
  scanf("%d %d", &n, &k);
  if (n >= k){
      coef = coeficiente(n , k);
      printf("O coeficiente binomial de (%d, %d) é: ", n, k);
  } else {
      coef = coeficiente(k, n);
      printf("O coeficiente binomial de (%d, %d) é: ", k, n);
  }
  printf("%d;\n", coef);
  return 0;
}
