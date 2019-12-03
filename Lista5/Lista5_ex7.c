#include<stdio.h>
#include<math.h>

float geometrica(int n, float *v){
  float media = 1;
    for (int i = 0; i < n; i++){
        media *= v[i];
    }
    float media = pow(media, 1.0/n);
    return media;
}

int main() {
  int n = 10;
  float v[ ] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};

  printf("A média geométrica é: %2.2f\n", geometrica(n, v));

  return 0;
}
