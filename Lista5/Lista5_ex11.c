#include<stdio.h>

int testPA(int n, int *v){
    int k = v[1] - v[0];
    for(int i = 0; i < n; i++){
        if (v[i] != (v[0] + i*k)){
            return 0;
        }
    }
    return k;
}

int main() {
  int n = 4;
  int intArr[] = {10, 18, 26, 34};
  int counter = testPA(n, intArr);
  if(counter == 0){
      printf("O vetor não é uma PA!\n");
  } else {
      printf("O vetor é uma PA de constante k = %d;\n", counter);
  }
  return 0;
}
