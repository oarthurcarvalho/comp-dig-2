#include <stdio.h>

int MDC(int x, int y){
  int MOD = x % y;

  if (MOD == 0){
    return y;
  }
  else {
    return MDC(y, MOD);
  }
}

int main() {
  int x, y, z, mdc;

  printf("Entre com três números inteiros separados por espaço:");
  scanf("%d %d %d", &x, &y, &z);

  mdc = MDC(MDC(x, y), z);
  printf("O MDC entre %d, %d e %d é %d\n", x, y, z, mdc);
  return 0;
}
