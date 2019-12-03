#include<stdio.h>

float ponderada(int n, float *v, float *w){
  float num = 0;
    float den = 0;
    for (int i = 0; i < n; i++){
        num += (v[i] * w[i]);
        den += w[i];
    }
  float media = num / den;
  return media;
}

int main(int argc, char const *argv[]) {
  int n = 10;
  float v[ ] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
  float w[ ] = {10.0,9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};

  printf("A média ponderada é: %2.2f\n", ponderada(n, v, w));
  return 0;
}
