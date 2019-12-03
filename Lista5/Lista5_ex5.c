#include<stdio.h>

int negativosRec(int n, float *v, int counter){
    n--;
    if (n < 0){
        return counter;
    }
    if (v[n] < 0){
        counter ++;
    }
    negativosRec(n,v,counter);
}


int paresRec(int n, int *v, int counter){
    n--;
    if (n < 0){
        return counter;
    }
    if (v[n] % 2 == 0){
        counter ++;
    }
    paresRec(n, v, counter);
}


void inverteRec(int n, int *v, int index){
    int temp;
    if (index < n/2){
        temp = v[index];
        v[index] = v[n-1-index];
        v[n-1-index] = temp;
        index++;
        inverteRec(n, v, index);
    }
}


float minimoRec(int n, float *v, float min){
    n--;
    if (n < 0){
        return min;
    }
    if (v[n] < min){
        min = v[n];
    }
    minimoRec(n, v, min);
}

void printIntArray(int n, int *arr){
    int i;
    for (i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
    printf(";\n");
}

int main() {
  int n = 10;
  int v_int[ ] = {1,2,3,4,5,6,7,8,9,10};
  float v_float[ ] =  {-1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
  int counter;

  counter = negativosRec(n, v_float, 0);
  printf("O vetor de reais tem %d números negativos.\n", counter);

  counter = paresRec(n, v_int, 0);
  printf("O vetor de inteiros tem %d números pares.\n", counter);

  inverteRec(n, v_int, 0);
  printf("O array de inteiros invertido: ");
  printIntArray(n, v_int);

  float floatVal = minimoRec(n, v_float, 99999999999999999.9);
  printf("O menor elemento do vetor de reais é %4f.\n", floatVal);
  return 0;
}
