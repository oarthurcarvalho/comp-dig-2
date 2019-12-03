#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

void para_circular(Lista* l);

void lst_imprime(Lista* lst);

int main(void)
{
	Lista *lst1 = NULL;
	lst1 = lst_insere(lst1,1);
	lst1 = lst_insere(lst1,12);
	lst1 = lst_insere(lst1,5);
	lst1 = lst_insere(lst1,17);
	lst1 = lst_insere(lst1,3);
	lst_imprime(lst1);
	printf("\n");

	para_circular(lst1);
	lst_imprime(lst1);
  printf("\n");
	return 0;
}

void lst_imprime(Lista* lst)
{
	Lista* p;
	for (p = lst; p != NULL; p = p->prox)
	{
		printf("%d ", p->info);
	}
}

Lista* lst_insere(Lista* lst, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = lst;
	return novo;
}

void para_circular(Lista* l)
{
	Lista* p1;

	for (p1 = l; p1 != NULL; p1 = p1->prox)
	{
		if (p1->prox == NULL)
		{
			p1->prox = l;
			l = p1;
			break;
		}
	}
}

void para_circular(Lista * l)
{
	ListaNo *p = l->prim;
	if (p) {
		for (; p->prox; p = p->prox) {
			;
		}
		p->prox = l->prim;
	}
}
