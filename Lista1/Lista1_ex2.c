#include<stdio.h>

int main() {
    double precoGalao, taxaConversao, precoReais;

    printf("Digite o preço do galão de gasolina: ");
    scanf("%lf", &precoGalao);
    printf("Digite a taxa de conversão dólar-reais: ");
    scanf("%lf", &taxaConversao);

    precoReais = precoGalao * taxaConversao;
    printf("Preço em Reais = R$ %4.2f\n", precoReais);
  return 0;
}
