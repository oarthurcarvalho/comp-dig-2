#include<stdio.h>

float harmonica(int n, float *v){
  float media = 0;
    for (int i = 0; i < n; i++)
        media += (1 / v[i]);
  media = 10.0 / media;
  return media;  
}

int main() {
  int n = 10;
  float v[ ] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};

  printf("A média harmônica é: %2.2f\n", harmonica(n, v));
  return 0;
}
