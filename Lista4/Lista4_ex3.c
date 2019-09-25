#include <stdio.h>


int fibonacci(int n){
  if (n <= 2){
    return 1;
  } else {
    return (fibonacci(n-2) + fibonacci(n-1));
  }
}

int main() {
  int f;
  printf("Os 13 primeiros termos da série de fibonacci são:\n");
  for (int i = 1; i <= 13; i++){
    f = fibonacci(i);
    printf(" %d", f);
  }
  printf(";\n");
  return 0;
}
