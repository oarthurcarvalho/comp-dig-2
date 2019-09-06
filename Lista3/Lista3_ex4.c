#include <stdio.h>

int calcularMDC(int a, int b){

   int q = 0;
   int r = 0;

   /*   b = qa + r   */
   do {

      q = b / a;
      r = b % a;
      printf("%d = %d * %d + %d \n", b, q, a, r);

      b = a;
      if (r) a = r;

   } while (r != 0);

   return a;

}

int main() {

   int a = 0;
   int b = 0;

   scanf("%d %d", &a, &b);

   printf("MDC(%d,%d) = %d\n", a, b, calcularMDC(a,b));

   return 0;

}
