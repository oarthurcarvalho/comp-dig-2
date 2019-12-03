#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

Lista* inverte(Lista *l);

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

	lst_imprime(inverte(lst1));
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

Lista* inverte(Lista* lst)
{
    Lista *lstProx, *lstAnt, *pTemp, *lstNew;

    lstAnt = lst;
    lstProx = lst->prox;

    lstAnt->prox = NULL;

    do
    {
        pTemp = lstProx->prox;
        lstProx->prox = lstAnt;
        lstAnt = lstProx;
        lstProx = pTemp;
    }
    while (lstProx->prox != NULL);

    lstProx->prox = lstAnt;

    lstNew = lstProx;

    return lstNew;
}
