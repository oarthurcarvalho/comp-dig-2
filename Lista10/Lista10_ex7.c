#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);

Lista* merge(Lista *l1, Lista *l2);

void lst_imprime(Lista* lst);

int main(void)
{
	Lista *lst1 = NULL;
	lst1 = lst_insere(lst1,1);
	lst1 = lst_insere(lst1,4);
	lst1 = lst_insere(lst1,2);
	lst_imprime(lst1);
	printf("\n");

	Lista *lst2 = NULL;
	lst2 = lst_insere(lst2,3);
	lst2 = lst_insere(lst2,7);
	lst_imprime(lst2);
	printf("\n");

	Lista *lst3 = merge(lst1, lst2);

	lst_imprime(lst3);
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

Lista* merge(Lista *l1, Lista *l2)
{
	Lista* list1_Head = l1;
	Lista* list2_Head = l2;
	Lista* mergedList_Head, * mergedList_Tail;

	/*If list1 is empty...*/
	if (list1_Head == NULL)
	{
		return list2_Head; //Merged list is only list2
	}
	/*If list2 is empty...*/
	else if(list2_Head == NULL)
	{
		return list1_Head; //Merged list is only list1
	}

	mergedList_Head = list1_Head;
	mergedList_Tail = list1_Head;
	list1_Head = list1_Head->prox;

	/*Perform merging so long as neither list is empty*/
	while (list1_Head != NULL && list2_Head != NULL)
	{

	   mergedList_Tail->prox = list2_Head;
	   list2_Head = list2_Head->prox;
	   mergedList_Tail = mergedList_Tail->prox;

	   mergedList_Tail->prox = list1_Head;
	   list1_Head = list1_Head->prox;
	   mergedList_Tail = mergedList_Tail->prox;

	}

	if(list2_Head != NULL) {
	    mergedList_Tail = list2_Head;
	}
	else if(list1_Head != NULL) {
	    mergedList_Tail = list1_Head;
	}

	mergedList_Tail->prox = NULL;

    return mergedList_Head;
}
