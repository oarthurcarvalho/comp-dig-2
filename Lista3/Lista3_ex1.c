#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

double calcularEsfera(double raio){
  double volumeEsfera;
  volumeEsfera = (4 * M_PI * pow(raio,3)) / 3;
  return volumeEsfera;
}

double calcularCalota(double raio){
  double altura, volumeCalota, volumeCilindro;
  printf("Digite a altura da calota: ");
  scanf("%lf", &altura);
  volumeCalota = (1.0/3.0) * M_PI * pow(altura, 2) * ((3.0 * raio) - altura);
  printf("O volume da calota será: %4.2f\n", volumeCalota);
  volumeCilindro = volumeCalota + (M_PI * pow(raio,2) * (2*raio - altura));
  printf("O volume da cilindro será: %4.2f\n", volumeCilindro);
  return volumeCilindro;
}

int main() {
  double raio;
  printf("Digite o valor do raio da miçanga: ");
  scanf("%lf", &raio);
  double volumeEsfera = calcularEsfera(raio);
  double volumeCalota = calcularCalota(raio);
  double volumeTotal = volumeEsfera - volumeCalota;
  printf("O volume da esfera será: %4.2f\n", volumeEsfera);
  printf("O volume da calota será: %4.2f\n", volumeCalota);
  printf("O volume da peça será: %4.2f\n", volumeTotal);
  return 0;
}
