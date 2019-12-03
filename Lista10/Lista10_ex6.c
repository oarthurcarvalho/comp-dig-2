#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

Lista* separa(Lista *l, int x);

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

	Lista *lst2 = separa(lst1, 17);

	lst_imprime(lst1);
	printf("\n");
	lst_imprime(lst2);
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

Lista* separa(Lista *l, int x)
{
	Lista* p1 = l;
	Lista* p2;

	for (p1 = l; p1 != NULL; p1 = p1->prox)
	{
		if (p1->info == x)
		{
			p2 = p1->prox;
			p1->prox = NULL;
		}
	}
	return p2;
}
