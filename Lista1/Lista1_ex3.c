#include<stdio.h>

int main() {
    int horas, minutos, entrada;
    double segundos;

    printf("Digite os segundos a ser convertidos: ");
    scanf("%d", &entrada);

    horas = entrada / 3600;
    entrada = entrada - (horas * 3600);

    minutos = entrada / 60;
    entrada = entrada - (minutos * 60);

    segundos = entrada;

    printf("%02d:%02d:%05.2f\n", horas, minutos, segundos);
    return 0;
}
