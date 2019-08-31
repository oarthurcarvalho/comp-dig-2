#include<stdio.h>

int main(int argc, char const *argv[]) {
    int graus, minutos, segundos;
    double anguloRadiano, temp;

    printf("Digite o valor do ângulo em radiano: ");
    scanf("%lf", &anguloRadiano);

    temp = (anguloRadiano * 57.29578);
    graus = (int)temp;
    temp = (temp - graus) * 60;
    minutos = (int)temp;
    temp = ((temp - (int)minutos) * 60);
    segundos = (int)temp;
    printf("rad = %d° %d\' %d\" \n", graus, minutos, segundos);

    return 0;
}
