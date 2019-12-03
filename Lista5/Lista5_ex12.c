#include<stdio.h>

void histograma(int n, float *v, int *h){
    int index;
    for (int i = 0; i < n; i++){
        index = v[i] / 0.1;
        h[index]++;
    }
}

void printIntArray(int n, int *arr){
    int i;
    for (i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
    printf(";\n");
}

void printFloatArray(int n, float *arr){
    int i;
    for (i = 0; i < n; i++){
        printf(" %f", arr[i]);
    }
    printf(";\n");
}

int main() {
  int vn = 12;
  float v[] = {0.11, 0.2, 0.03, 0.56, 0.323, 0.345, 0.234, 0.56,0.6546, 0.123, 0.123, 0.999};
  int h[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  printf("Médias Consideradas:\n");
  printFloatArray(vn, v);
  histograma(vn, v, h);
  printf("Histograma resultante:\n");
  printIntArray(10, h);
  return 0;
}
