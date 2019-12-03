#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4


float* converte_b(int m, int n, float **mat){
    int i, j, k;
    float *resp;
    resp = (float*)malloc(m*n*sizeof(float));

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            k = (i * n) + j;
            resp[k] = mat[i][j];
        }
    }
    return resp;
}

float** createVectorOfPointersMatrix(int row, int col){
    int i, j;
    float **resp;

    resp = (float**)malloc(row*sizeof(float*));
    for (i = 0; i < row; i++){
        resp[i] = (float*)malloc(col*sizeof(float));
    }

    printf("entre com os valores da matriz:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &resp[i][j]);
        }
    }
    printf("\n");
    return resp;
}

int main(){
    char selection, charVar;
    int i, j, k, intVar, intVar2, result, lin, col;
    float floatVal, *floatArr, **floatPArr;


    printf("Entre como número de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Entre como número de colunas da matriz: ");
    scanf("%d", &col);
    floatPArr = createVectorOfPointersMatrix(lin, col);
    floatArr = converte_b(lin, col, floatPArr);

    for (i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            k = i * col + j;
            printf("V[%d] = %f\n", k, floatArr[k]);
        }
    }

}
