#include<stdio.h>
#include<math.h>

int main() {
    double raio, volume;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    printf("%f\n", raio);
    volume = ((4.0 / 3.0) * 3.14) * pow(raio,3);
    printf("Volume = %f \n", volume);
    return 0;
}
