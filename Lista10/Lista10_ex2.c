#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

int maiores(Lista *l, int x);

int main(void)
{
	Lista *lst = NULL;
	lst = lst_insere(lst,23);
	lst = lst_insere(lst,45);
	lst = lst_insere(lst,25);
	lst = lst_insere(lst,28);
	int x = 27;
	printf("O numero de itens de valor maior que %d é %d\n", x, maiores(lst,x));

	return 0;
}

Lista* lst_insere(Lista* lst, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = lst;
	return novo;
}

int maiores(Lista *l, int x)
{
	Lista* p = l;
	int i;
	int count = 0;

	for (i=0; p != NULL; i++)
	{
		if (p->info > x)
		{
			count++;
		}
		p = p->prox;
	}
	return count;
}
