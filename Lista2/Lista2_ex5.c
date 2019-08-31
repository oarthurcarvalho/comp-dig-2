#include<stdio.h>
#include<math.h>

int main() {
  double r;
  int alpha;
  int flag = 0;

  for (;;) {
    printf("Digite o raio: ");
    scanf("%lf", &r);
    if (r >= 0.0) {
      break;
    }
    printf("Valor Inválido\n");
  }

  printf("Digite o ângulo: ");
  scanf("%d", &alpha);
  alpha = alpha % 360;

  double x, y;

  x = r * cos(alpha);
  y = r * sin(alpha);

  printf("(%3.2lf,%3.2lf)\n", x,y);


  return 0;
}
