#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4


int inversa(double A[][N], double B[][N]){
    int i, j, k, soma = 0;
    int parcial;
    double mult[N][N];
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            mult[i][j] = 0;
            for (k = 0; k < N; k++){
                mult[i][j] += A[i][k] * B[k][j];
            }
            mult[i][j] = roundf(mult[i][j]);
        }
    }
    parcial = identidade(mult);
    printf("%d\n", parcial);
    return parcial;
}

int identidade(double A[][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (((i == j) && (A[i][j] != 1)) || ((i != j) && (A[i][j] != 0))){
                return 0;
            }
        }
    }
    return 1;
}

int main(void){
    char charVar;
    int i, j, k, intVar, intVar2, result, lin, col;
    float floatVal, *floatArr, **floatPArr;
    double A[N][N]={{1, 0, 0, 0},
                    {1, 2, 0, 0},
                    {1, 2, 3, 0},
                    {1, 2, 3, 4}};

    double B[N][N]={{1, 0, 0, 1},
                    {1, 2, 0, 0},
                    {1, 2, 3, 0},
                    {1, 2, 3, 4}};

    double ID[N][N]={{1, 0, 0, 0},
                    {0, 1, 0, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 1}};

    double INVA[N][N]={{1, 0, 0, 0},
                       {-0.5, 0.5, 0, 0},
                       {0, -0.333, 0.333, 0},
                       {0, 0, -0.25, 0.25}};

   result = inversa(A, INVA);
   if(result == 1){
       printf("As matrizes escolhidas SÃO inversas!\n");
   } else{
       printf("As matrizes escolhidas NÃO são inversas!\n");
   }
}
