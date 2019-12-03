#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct retangulo	//entrando com parâmetros do retângulo (base e altura)
{
	float b;
	float h;
} Rect;

typedef struct circulo		//entrando com parâmetros do círculo (raio)
{
	float r;
} Circ;

Rect* rectInscrito(Circ* circ, float h);	//Protótipo utilizado

Circ* circSob(Rect* rect);					//Protótipo utilizado

int main(void)
{
	Rect rectTest = {2.0f, 1.0f};			//base e altura do retângulo
	Rect* p_rectTest = &rectTest;
	Rect* p_retrect;

	Circ circTest = {1.5f};					//raio do círculo
	Circ* p_circTest = &circTest;
	Circ* p_retcirc;

	printf("Dado um círculo de raio: %.2f e um retângulo inscrito de altura: %.2f \n", p_circTest->r, p_rectTest->h);
	p_retrect = rectInscrito(p_circTest, rectTest.h);
	printf("Teremos como base do retângulo: %.2f e altura: %.2f\n", p_retrect->b, p_retrect->h);

    //rectTest.b = 5.0f;				//base retângulo
    //rectTest.h = 2.0f;				//altura ret�ngulo
    //p_rectTest = &rectTest;

    //circTest.r = 2.5f;				//raio círculo
    //p_circTest = &circTest;


	printf("Dado um retângulo de base: %.2f e altura : %.2f \n", p_rectTest->b, p_rectTest->h);
	p_retcirc = circSob(p_rectTest);
	printf("Teremos um círculo interno de raio: %.2f\n", p_retcirc->r);


	return 0;
}


Rect* rectInscrito(Circ* circ, float h)
{
	Rect* p_rect = (Rect*)malloc(sizeof(Rect));
	float r = circ->r;
	float b = 4*r*r - h*h;

	b = pow(b, 0.5);


	p_rect->b = b;
	p_rect->h = h;

	return p_rect;
}

Circ* circSob(Rect* rect)
{
	Circ* p_circ = (Circ*)malloc(sizeof(Circ));
	Circ circ;
	p_circ = &circ;
	p_circ->r = (0.5)*rect->h;
	return p_circ;
}
