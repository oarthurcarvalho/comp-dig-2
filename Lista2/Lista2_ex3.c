#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, delta;
  float x1,x2;

  printf("Digite os coeficientes da equações:\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  if (a == 0)
  {
      printf("Esta equação apresenta apenas 1 raiz. X1 = %f \n", (-c/b));
  }
  else
  {
      delta = (b * b) - (4 * a * c);

      if (delta > 0)
      {
          x1 = ((-b + sqrt(delta)) / (2 * a));
          x2 = ((-b - sqrt(delta)) / (2 * a));
          printf("X1 = %f \n ", x1);
          printf("X2 = %f \n", x2);
      }
      else if (delta == 0) {
          x1 = -b / (2*a);
      }
      else
      {
          printf("Não há raízes reais para esta condição\n");
      }
      return 0;
  }  
}
