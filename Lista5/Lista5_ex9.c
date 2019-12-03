#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double* doubleArray(int n){
    int i;
    double *array;

    array = (double*)malloc(n*sizeof(double));
    printf("Entre com %d números reais:\n", n);
    for (i = 0; i < n; i++){
        scanf(" %lf", &array[i]);
    }
    return array;

}

void printDoubleArray(int n, double *arr){
    int i;
    for (i = 0; i < n; i++){
        printf(" %lf", arr[i]);
    }
    printf(";\n");
}

double avalia(double* poli, int grau, double x){
  double root = 0;
    for (int i = 0; i <= grau; i++){
        root += (poli[i] * pow(x,(grau - i)));
    }
  return root;
}

int main() {
  int n;
  double doubleVal, doubleVal2, *doubleArr;

  printf("Estrutura:\n");
  printf("função = ax² + bx + c\nvetor = [c b a]\n\n");
  printf("Entre com o Grau do polinômio:\n");
  scanf(" %d", &n);
  printf("Vetor de coeficientes:\n");
  doubleArr = doubleArray(n+1);
  printf("Entre com um valor para X: ");
  scanf("%lf", &doubleVal);
  doubleVal2 = avalia(doubleArr, n, doubleVal);
  printf("Para o valor dado, o polinômio avalia para: %lf;\n", doubleVal2);
}
