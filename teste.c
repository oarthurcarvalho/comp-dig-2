#include <stdio.h>

int main() {
  int a, b, *p;
  a = 2;
  *p = 3;
  b = a + (*p);
  printf("%d\n", b);
  return 0;
}
