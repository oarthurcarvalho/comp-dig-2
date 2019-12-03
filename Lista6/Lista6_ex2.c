#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4

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

void printMatrix(int row, int col, double mat[][N]){
    for (int i=0; i < row; i++){
        printf("\t");
        for(int j=0; j<col; j++){
            if(mat[i][j] < 0){
                printf("%.2lf  ", mat[i][j]);
            } else {
                printf("%.3lf  ", mat[i][j]);
            }
        }
        printf("\n");
     }
}

void printTestMatrix(double A[][N], double B[][N], double ID[][N], double INVA[][N]){
    printf("\nMatriz 1:\n    A =\n");
    printMatrix(N,N,A);
    printf("\nMatriz 2:\n    B =\n");
    printMatrix(N,N,B);
    printf("\nMatriz 3:\n   ID =\n");
    printMatrix(N,N,ID);
    printf("\nMatriz 4:\n INVA =\n");
    printMatrix(N,N,INVA);
    printf("\n");
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

    printTestMatrix(A, B, ID, INVA);
    printf("Escolha uma matriz: ");
    scanf("%d", &intVar);
    if (intVar == 1){
        result = identidade(A);
    } else if(intVar == 2){
        result = identidade(B);
    } else if(intVar == 3){
        result = identidade(ID);
    } else if(intVar == 4){
        result = identidade(INVA);
    } else{
        printf("Matriz n�o encontrada!");
	}

    if(result == 1){
        printf("A matriz escolhida eh identidade!\n");
    } else{
        printf("A matriz escolhida nao eh identidade!\n");
    }

}
