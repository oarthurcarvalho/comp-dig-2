#include <stdio.h>

int pares(int n, int* v) {
  int nPares = 0;

  for (int i = 0; i < n; i++) {
    if ((v[i] % 2) == 0)
      nPares++;
  }
  return nPares;
}

int main() {
  int n = 10;
  int v[ ] = {1,2,3,3,5,3,7,3,9,11};

  printf("Quantidade de Números pares: %d\n", pares(n, v));
  return 0;
}
