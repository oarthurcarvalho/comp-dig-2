#include <stdio.h>

int negativos(int n, float *v){
  int negativeCounter = 0;
  for (int i = 0; i < n; i ++){
    if (v[i] < 0){
        negativeCounter ++;
    }
  }
  return negativeCounter;
}

float* floatArray(int n){
  int i;
  float *array;

  array = (float*)malloc(n*sizeof(float));
  printf("Entre com %d números reais:\n", n);
  for (i = 0; i < n; i++){
    scanf(" %f", &array[i]);
  }
  return array;
}

int tamanhoArray(void){
  int n;
  printf("Entre com o tamanho do vetor: ");
  scanf(" %d", &n);
  return n;
}

int main() {
  n = tamanhoArray();
  floatArr = floatArray(n);
  counter = negativos(n, floatArr);
  printf("O vetor tem %d números negativos.\n", counter);
  return 0;
}
