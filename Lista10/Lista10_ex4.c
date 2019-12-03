#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista* prox;
}Lista;

Lista* lst_insere(Lista* lst, int i);
void concatena(Lista *l1, Lista *l2);
void lst_imprime(Lista* lst);

int main(void){
	Lista *lst1 = NULL;
	lst1 = lst_insere(lst1,1);
	lst1 = lst_insere(lst1,2);
	lst1 = lst_insere(lst1,3);
	lst1 = lst_insere(lst1,4);
	lst_imprime(lst1);
	printf("\n");
	Lista *lst2 = NULL;
	lst2 = lst_insere(lst2,5);
	lst2 = lst_insere(lst2,6);
	lst2 = lst_insere(lst2,7);
	lst2 = lst_insere(lst2,8);
	lst_imprime(lst2);
	printf("\n");
	concatena(lst1, lst2);
	lst_imprime(lst1);
  printf("\n");
	return 0;
}
void lst_imprime(Lista* lst){
	Lista* p;
	for (p = lst; p != NULL; p = p->prox){
		printf("%d ", p->info);
	}
}
Lista* lst_insere(Lista* lst, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = lst;
	return novo;
}
void concatena(Lista *l1, Lista *l2){
	Lista* p1;
	Lista* p2 = l2;
	for (p1 = l1; p1 != NULL; p1 = p1->prox){
		if (p1->prox == NULL){
			p1->prox = p2;
			l1 = p1;
			break;
		}
	}
}
