#include<stdio.h>

void inverte(int n, int* v) {
  int temp;
  for (int i = 0; i < n/2; i++){
      temp = v[i];
      v[i] = v[n-1-i];
      v[n-1-i] = temp;
    }

}

int main()
{
  int n = 10;
  int v[ ] = {1,2,3,4,5,6,7,8,9,10};

  inverte(n, v);

  int i;
    for (i = 0; i < n; i++){
        printf(" %d", v[i]);
    }
  printf(";\n");

  return 0;
}
