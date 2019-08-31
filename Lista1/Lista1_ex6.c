#include<stdio.h>

int main() {
    int entrada;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    printf("Digite um número inteiro em reais: ");
    scanf("%d", &entrada);

    notas100 = entrada / 100;
    entrada = entrada - (notas100 * 100);

    notas50 = entrada / 50;
    entrada -= (notas50 * 50);

    notas20 = entrada / 20;
    entrada -= (notas20 * 20);

    notas10 = entrada / 10;
    entrada -= (notas10 * 10);

    notas5 = entrada / 5;
    entrada -= (notas5 * 5);

    notas2 = entrada / 2;
    entrada -= (notas2 * 2);

    notas1 = entrada / 1;
    entrada -= (notas1 * 1);

    printf("Notas de 100: %d\n"
           "Notas de 50: %d\n"
           "Notas de 20: %d\n"
           "Notas de 10: %d\n"
           "Notas de 5: %d\n"
           "Notas de 2: %d\n"
           "Notas de 1: %d\n",
            notas100,notas50,notas20,
            notas10,notas5,notas2,notas1);

    return 0;
}
