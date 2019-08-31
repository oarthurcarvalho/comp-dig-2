#include <stdio.h>

int main() {
  int opcao;
  double entrada, resultado;

  printf("Digite a opção desejada: \n");
  printf("1 - Peso \n"
         "2 - Volume \n"
         "3 - Comprimento \n");
  printf("Opção Desejada: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:

      printf("\nDigite o número da conversão desejada\n");
      printf("1 - Libra → Quilograma\n"
             "2 - Quilo → Libra\n"
             "3 - Onça → Grama\n"
             "4 - Grama → Onça\n");
      scanf("%d", &opcao);

      switch (opcao) {
        case 1:
          printf("Digite o valor em libras: ");
          scanf("%lf", &entrada);
          resultado = entrada *  0.4536;
          printf("%3.2f lb em quilogramas é %3.2f\n", entrada, resultado);
          break;

        case 2:
          printf("Digite o valor em quilogramas: ");
          scanf("%lf", &entrada);
          resultado = entrada /  0.4536;
          printf("%3.2f quilogramas em libras é %3.2f\n", entrada, resultado);
          break;

        case 3:
          printf("Digite o valor em onças: ");
          scanf("%lf", &entrada);
          resultado = entrada * 28.349;
          printf("%3.2f onças em gramas é %3.2f\n", entrada, resultado);
          break;

        case 4:
          printf("Digite o valor em gramas: ");
          scanf("%lf", &entrada);
          resultado = entrada / 28.349;
          printf("%3.2f gramas em onças é %3.2f\n", entrada, resultado);
          break;

      }
      break;
    case 2:

    printf("\nDigite o número da conversão desejada\n");
    printf("1 - Galão → Litro\n"
           "2 - Litro → Galão\n"
           "3 - Onça → Mililitro\n"
           "4 - Mililitro → Onça\n");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("Digite o valor em Galão: ");
        scanf("%lf", &entrada);
        resultado = entrada * 3.7654;
        printf("%3.2f galões em Litros é %3.2f\n", entrada, resultado);
        break;

      case 2:
        printf("Digite o valor em Litros: ");
        scanf("%lf", &entrada);
        resultado = entrada / 3.7654;
        printf("%3.2f Litros em Galões é %3.2f\n", entrada, resultado);
        break;

      case 3:
        printf("Digite o valor em onças: ");
        scanf("%lf", &entrada);
        resultado = entrada * 29.573;
        printf("%3.2f onças em Mililitros é %3.2f\n", entrada, resultado);
        break;

      case 4:
        printf("Digite o valor em Mililitros: ");
        scanf("%lf", &entrada);
        resultado = entrada / 29.573;
        printf("%3.2f Mililitros em onças é %3.2f\n", entrada, resultado);
        break;

    }
    break;

    case 3:

      printf("\nDigite o número da conversão desejada\n");
      printf("1 - Milhas → Quilômetros\n"
             "2 - Quilômetros → Milhas\n"
             "3 - Jardas → Metros\n"
             "4 - Metros → Jardas\n");
      scanf("%d", &opcao);

      switch (opcao) {
        case 1:
          printf("Digite o valor em Milhas: ");
          scanf("%lf", &entrada);
          resultado = entrada * 1.6093;
          printf("%3.2f milhas em Quilômetros é %3.2f\n", entrada, resultado);
          break;

        case 2:
          printf("Digite o valor em Quilômetros: ");
          scanf("%lf", &entrada);
          resultado = entrada / 1.6093;
          printf("%3.2f Quilômetros em Milhas é %3.2f\n", entrada, resultado);
          break;

        case 3:
          printf("Digite o valor em Jardas: ");
          scanf("%lf", &entrada);
          resultado = entrada * 0.9144;
          printf("%3.2f Jardas em Metros é %3.2f\n", entrada, resultado);
          break;

        case 4:
          printf("Digite o valor em Metros: ");
          scanf("%lf", &entrada);
          resultado = entrada / 0.9144;
          printf("%3.2f Metros em Jardas é %3.2f\n", entrada, resultado);
          break;
      }
      break;
  }

  return 0;
}
