#include<stdio.h>

float minimo(int n, float *v) {
  float min = 99999999999999999.9;
    for (int i = 0; i < n; i++){
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

int main() {

  int n = 10;
  float v[ ] = {1.0,0.5,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};

  printf("O menor número do vetor é %1.2f\n", minimo(n, v));

  return 0;
}
