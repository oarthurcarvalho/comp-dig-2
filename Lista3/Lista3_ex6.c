#include <stdio.h>

int nthFibonacci(int n){
    int F[n];
    F[0] = 1;
    F[1] = 1;
    for (int i = 2; i < n; i++){
        F[i] = F[i-2] + F[i-1];
    }
    return F[n-1];
}


void firstNFibonacci(void){
    int n, f;
    printf("Entre com o número de termos da série de fibonnaci: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        f = nthFibonacci(i);
        printf(" %d", f);
    }
    printf(";\n");
}

int isFibonacci(int n){
    int stopFlag, nthFib;
    int i = 1;
    while (stopFlag != 1){
        nthFib = nthFibonacci(i);
        if (nthFib == n){
            printf("O número %d é o termo número %d na série de fibonacci.\n", n, i);
            stopFlag = 1;
        } else if(nthFib > n){
            printf("O número %d não pertence a série de fibonacci.\n", n);
            stopFlag = 1;
        }
        i++;
    }
}

int main(void) {

  char sel;
  int num;

  printf("\ta - Primeiros n números da série de Fibonacci;\n");
  printf("\tb - Verifica se o termo pertence a série de Fibonacci;\n");
  printf("Selecione uma letra: ");
  scanf("%s", &sel);
  if(sel == 'a'){
    firstNFibonacci();
  } else if (sel == 'b'){
    printf("Entre com um número inteiro: ");
    scanf("%d", &num);
    isFibonacci(num);
  } else {
    printf("Item não encontrado!\n");
  }
  return 0;
}
