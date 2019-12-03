#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario Funcionario;
struct funcionario
{
	char nome[81];
	float valor_hora;
	int horas_mes;
};

void carrega(int n, Funcionario **vet, char *arquivo);

int main(void)
{
  int n = 3;
  char nomeArq[81] = "Lista9_q3.txt";
  int i;
  Funcionario** pVetPfunc;

  pVetPfunc = (Funcionario**)malloc(n*sizeof(Funcionario*));
  for (i=0; i < n; i++) pVetPfunc[i] = NULL;

  carrega(n, pVetPfunc, nomeArq);

  printf("Verificando criacao do vetor de ponteiros para Funcionario...\n");
  for (i=0; i<n; i++)
  {
      printf("Funcionario %d: %s\t%f %d\n", i, pVetPfunc[i]->nome,
                                               pVetPfunc[i]->valor_hora,
                                               pVetPfunc[i]->horas_mes);
    }
}

void carrega(int n, Funcionario **vet, char *arquivo)
{
  Funcionario tempFunc;
  char tempNome[81];
  int newline_lixo;
  int i;

  printf("Criando vetor de ponteiros para funcionarios...\n");
  for (i=0; i < n; i++)
      vet[i] = (Funcionario*)malloc(sizeof(Funcionario));

  FILE* fp = fopen(arquivo, "rt");
  if (fp == NULL)
  {
      printf("Erro ao abrir arquivo.\n");
      exit(1);
  }

  i = 0;

  while (fgets(tempNome, 81, fp) != NULL)
  {
      strcpy(tempFunc.nome, tempNome);
      fscanf(fp, " %f%d%d", &(tempFunc.valor_hora),
                            &(tempFunc.horas_mes),
                            &newline_lixo);

      *(vet[i]) = tempFunc;
      i++;
  }

  fclose(fp);
}
