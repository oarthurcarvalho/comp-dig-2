#include <stdio.h>
#include <stdlib.h>

void aprovados(char* fp_name);

int main(void)
{
	char arquivo[] = "Lista9_q2.txt";
	aprovados(arquivo);

	return 0;
}


void aprovados(char* fp_name)
{
    char nome[20], sobrenome[20];
    float p1, p2, med;

    FILE* fp = fopen(fp_name, "rt");
    if (fp == NULL)
    {
        printf("Arquivo nao encontrado.");
        exit(1);
    }

    FILE* fpAprov = fopen("aprovados.txt" ,"a");
    if (fpAprov == NULL)
    {
        printf("Nao foi possivel criar o arquivo aprovados.txt.");
        exit(1);
    }

    while (fscanf(fp, " %s%s%f%f", nome, sobrenome, &p1, &p2) > 0)
    {
        med = (p1+p2)/2.0f;
        if (med >= 5.0f)
        {
            fprintf(fpAprov, "%s %s \t %f\n", nome, sobrenome, med);
        }
    }

    printf("Arquivo criado: aprovados.txt\n");

    fclose(fp);
    fclose(fpAprov);
}
