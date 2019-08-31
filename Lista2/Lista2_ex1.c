#include<stdio.h>

int main() {
  int num1, num2, num3;
  printf("Digite 3 números inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2) {
    if (num1 > num3) {
      printf("O maior número da sequência é %d\n", num1);
    }
    else {
      printf("O maior número da sequência é %d\n", num3);
    }
  }
  else if (num2 > num3) {
    printf("O maior número da sequência é %d\n", num2);
  }
  else {
    printf("O maior número da sequência é %d\n", num3);
  }

  return 0;
}
