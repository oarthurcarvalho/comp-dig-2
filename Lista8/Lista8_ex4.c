#include <stdio.h>
#include <math.h>

typedef struct ponto Ponto;
struct ponto {
float x, y;
};

typedef struct circulo Circulo;
struct circulo {
Ponto c; //centro do c�rculo
float r; //raio
};

int intersecao(Circulo *a, Circulo *b);

int main(void)
{
	Ponto c1, c2;
	Circulo circ1, circ2;
	int inters;

	c1.x = 0;
	c1.y = 0;
	c2.x = 1;
	c2.y = 1;

	circ1.c = c1;
	circ2.c = c2;

	circ1.r = 1;
	circ2.r = 1;

	inters = intersecao(&circ1, &circ2);
	if (inters == 1)
	{
		printf("Houve interseção\n");
	}
	else
	{
		printf("Não houve interseção\n");
	}
	return 0;
}

int intersecao(Circulo *a, Circulo *b)
{
	//retornando 1 se houver interseção, ou 0, caso não.
	Ponto c1 = a->c;
	Ponto c2 = b->c;
	float dist;
	dist = sqrt((c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y - c2.y));
	return ((a->r + b->r) > dist);
}
