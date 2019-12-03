#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4

float** converte_a(int m, int n, float *mat){
    int i, j, k;
    float **resp;

    resp = (float**)malloc(m*sizeof(float*));
    for (i = 0; i < m; i++){
        resp[i] = (float*)malloc(n*sizeof(float));
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            k = (i * n) + j;
            resp[i][j] = mat[k];
        }
    }
    return resp;
}

float* createVectorMatrix(int row, int col){
    int i, j, k = 0;
    float *resp;
    resp = (float*)malloc(row*col*sizeof(float));

    printf("entre com os valores da matriz:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            k = i * col + j;
            printf("V[%d] = ", k);
            scanf("%f", &resp[k]);
        }
    }
    printf("\n");
    return resp;
}

int main(void){
    char selection, charVar;
    int i, j, k, intVar, intVar2, result, lin, col;
    float floatVal, *floatArr, **floatPArr;


    printf("Entre como número de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Entre como número de colunas da matriz: ");
    scanf("%d", &col);
    floatArr = createVectorMatrix(lin, col);
    floatPArr = converte_a(lin, col, floatArr);

    for (i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("M[%d][%d] = %f\n", i, j, floatPArr[i][j]);
        }
    }
}
