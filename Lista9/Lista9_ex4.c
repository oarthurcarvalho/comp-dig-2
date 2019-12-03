#include<stdio.h>
#include<stdlib.h>

Aluno *carrega(char *arquivo, int *n)
{
	int i = 0;
	char mat[8], nome[81], linha[121];
	float cr;
	FILE *fp = fopen(arquivo, "rt");
	Aluno *alunos;

	if (!fp) {
		return NULL;
	}
	while (fgets(linha, sizeof(linha), fp)) {
		if (1 == sscanf(linha, "%d", n)) {
			break;
		}
	}
	alunos = (Aluno *) malloc(*n * sizeof(Aluno));
	if (!alunos) {
		perror("");
		exit(EXIT_FAILURE);
	}
	while (i < *n && fgets(linha, sizeof(linha), fp)) {
		if (3 == sscanf(linha, "%7s '%80[^']' %f", mat, nome, &cr)) {
			strcpy(alunos[i].mat, mat);
			strcpy(alunos[i].nome, nome);
			alunos[i].cr = cr;
			i++;
		}
	}
	fclose(fp);
	return alunos;
}
