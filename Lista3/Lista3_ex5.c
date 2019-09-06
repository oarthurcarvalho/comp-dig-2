#include <stdio.h>

int ehPrimo(int n){
    int rest;
    if (n <= 1){
        return 0;
    } else if (n == 2){
        return 1;
    }

    for (int i = 2; i < n; i++){
        rest = n % i;
        if (rest == 0){
            return 0;
        }
    }
    return 1;
}

int imprimirPrimos(int x){
    int primeFlag;
    printf("Primos menores que %d:", x);
    for (int i = 0; i < x; i++){
        primeFlag = ehPrimo(i);
        if (primeFlag == 1){
            printf(" %d", i);
        }
    }
    printf(";\n");
}

int imprimirOsPrimeirosPrimos(int n){
    int primeFlag;
    int i = 1;

    printf("primeiros %d números primos: \n", n);

    while (n > 0){
        primeFlag = ehPrimo(i);
        if (primeFlag == 1){
            printf(" %d", i);
            n--;
        }
        i++;
    }
    printf(";\n");
}

int main() {
  char sel;
  int num;

  printf("\ta - Primos menores que n;\n");
  printf("\tb - Primeiros n primos;\n");
  printf("Selecione uma letra: ");
  scanf("%s", &sel);
  if(sel == 'a'){
    printf("Entre com um número inteiro: ");
    scanf("%d", &num);
    imprimirPrimos(num);
  } else if (sel == 'b'){
    printf("Entre com um número inteiro: ");
    scanf("%d", &num);
    imprimirOsPrimeirosPrimos(num);
  } else {
    printf("Item não encontrado!\n");
  }
  return 0;
}
