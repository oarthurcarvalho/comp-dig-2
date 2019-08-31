#include<stdio.h>

int main() {
  double nota1, nota2, nota3, media;

  printf("Digite as notas da P1 e da P2 ");
  scanf("%lf %lf", &nota1, &nota2);

  media = (nota1 + nota2) / 2.0;

  if (media >= 5 && nota1 >= 3 && nota2 >= 3) {
    printf("O aluno está Aprovado com média: %3.2lf\n", media);
  }
  else {
    printf("Você não conseguiu média para passar. Digite sua nota da P3: ");
    scanf("%lf", &nota3);

    if (nota1 > nota2) {
      media = (nota3 + nota1) / 2.0;
    } else {
      media = (nota3 + nota2) / 2.0;
    }

    if (media >=5) {
      printf("O aluno está Aprovado com média: %3.2lf\n", media);
    }
    else {
      printf("O aluno está Reprovado com média: %3.2lf\n", media);
    }
  }
  return 0;
}
