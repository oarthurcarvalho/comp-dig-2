#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

int ultimo(Lista *l);

int main(void)
{
	Lista *lst = NULL;
	lst = lst_insere(lst,23);
	lst = lst_insere(lst,45);
	lst = lst_insere(lst,25);
	lst = lst_insere(lst,28);
	printf("O ultimo valor da lista é %d\n", ultimo(lst));

	return 0;
}

Lista* lst_insere(Lista* lst, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = lst;
	return novo;
}

int ultimo(Lista *l)
{
	Lista* p;

	for (p = l; p != NULL; p = p->prox)
	{
		if (p->prox == NULL)
		{
			return p->info;
		}
	}
}
