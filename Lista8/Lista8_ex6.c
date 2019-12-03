#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Aluno;

struct aluno {
char nome[81];
char matricula[8];
char turma;
float p1, p2, p3;
};

float media_turma(int n, Aluno *tab, char turma);

int main(void)
{
	Aluno *tab;
	int nAlunos = 3;
	float media;

	tab = (Aluno*)malloc(nAlunos*sizeof(Aluno));
	strncpy(tab[0].nome, "Anna", sizeof("Anna\n"));
	strncpy(tab[0].matricula, "1234567", sizeof("1234567\n"));
	tab[0].turma = 'A';
	tab[0].p1 = 7;
	tab[0].p2 = 8;
	tab[0].p3 = 9;

	strncpy(tab[1].nome, "Joao", sizeof("Joao\n"));
	strncpy(tab[1].matricula, "2345678", sizeof("2345678\n"));
	tab[1].turma = 'A';
	tab[1].p1 = 8;
	tab[1].p2 = 9;
	tab[1].p3 = 10;

	strncpy(tab[2].nome, "Pedro", sizeof("Pedro\n"));
	strncpy(tab[2].matricula, "3456789", sizeof("3456789\n"));
	tab[2].turma = 'B';
	tab[2].p1 = 5;
	tab[2].p2 = 6;
	tab[2].p3 = 7;

	media = media_turma(nAlunos, tab, 'B');
	printf("A media da turma foi %.2f\n", media);

	return 0;
}

float media_turma(int n, Aluno *tab, char turma)
{
	int i;
	int count = 0;
	float media = 0;
	for (i=0; i<n; i++)
	{
		if (tab[i].turma == turma)
		{
			media = media + (tab[i].p1 + tab[i].p2 + tab[i].p3)/3;
			count++;
		}
	}
	media = media/count;
	return media;
}
