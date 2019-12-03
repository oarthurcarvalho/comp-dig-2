#include<stdio.h>
#include<stdlib.h>

void deriva(double *poli, int grau, double *out){
    for (int i = 1; i <= grau; i++){
        out[i-1] = poli[i] * i;
    }
}

int main() {

  double doubleArr[] = {1.0, 2.0, 3.0};
  double doubleArr2[] = {0.0, 0.0, 0.0};
  int n = 2;

  deriva(doubleArr, n, doubleArr2);
  printf("Os coeficientes da derivada simbólica são:\n");

  int i;
    for (i = 0; i < n; i++){
        printf(" %.2lf", doubleArr2[i]);
    }
    printf(";\n");
  return 0;
}
