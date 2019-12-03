#include <stdio.h>
#include <stdlib.h>

float media(char *mat, char *nome_arquivo);

int main(void)
{
	char entrada[] = "Lista9_q1.txt";
	char matricula[] = "9210478-5";

	printf("A media do aluno e: %f\n", media(matricula, entrada));
	return 0;
}

float media(char* mat, char* nome_arquivo)
{
	float p1_lida, p2_lida, p3_lida;
	char mat_lida[20];


	FILE* p_file = fopen(nome_arquivo, "rt");
	if (p_file == NULL)
	{
		printf("Erro ao abrir arquivo.\n");
		exit(1);
	}

	// Formato dos dados no arquivo: 9010087-2  2.0  4.3  6.5

	while (fscanf(p_file, "%s %f %f %f", mat_lida, &p1_lida, &p2_lida, &p3_lida) > 0)
	{
		if (strcmp(mat, mat_lida))
		{
			continue;
		}
		else
		{
		    fclose(p_file);
			return (p1_lida + p2_lida + p3_lida) / 3;
		}
	}

	printf("Matricula nao encontrada.\n");
	fclose(p_file);

	return -1.0f;
}
