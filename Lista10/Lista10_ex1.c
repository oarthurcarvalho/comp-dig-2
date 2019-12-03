#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista* prox;}Lista;

Lista* lst_insere(Lista* lst, int i);

int comprimento(Lista *l);

int main(void){
	Lista *lst = NULL;
	lst = lst_insere(lst,23);
	lst = lst_insere(lst,45);
	printf("O comprimento da lista é %d\n", comprimento(lst));

	return 0;}

Lista* lst_insere(Lista* lst, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = lst;
	return novo;
}

int comprimento(Lista *l)
{
	Lista* p = l;
	int i = 0;

	for (i=0; p != NULL; i++)
	{
		p = p->prox;
	}
	return i;
}
