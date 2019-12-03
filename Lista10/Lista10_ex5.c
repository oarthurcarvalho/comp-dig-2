#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

void lst_imprime(Lista* lst);

Lista* lst_retira_n(Lista* lst, int x);

int main(void)
{
	Lista *lst = NULL;
	int n = 1;
	lst = lst_insere(lst,1);
	lst = lst_insere(lst,2);
	lst = lst_insere(lst,3);
	lst = lst_insere(lst,2);
	lst = lst_insere(lst,1);
	lst_imprime(lst);
	printf("\n");

	lst = lst_retira_n(lst, n);
	lst_imprime(lst);
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

Lista* lst_retira_n(Lista* lst, int x)
{
    Lista* lstTemp;
    Lista* lstTempAnter = lst;

    if ( (lst->info) == x)
    {
        lst = lst->prox;
    }

    for (lstTemp = lst; lstTemp->prox != NULL; lstTemp = lstTemp->prox)
    {
        if ( (lstTemp->info) == x)
        {
            lstTempAnter->prox = lstTemp->prox;
            //free(lstTemp);
        }

        lstTempAnter = lstTemp;
    }

    if ( (lstTemp->info == x) )  lstTempAnter->prox = NULL;

    return lst;
}
