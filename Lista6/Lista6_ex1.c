#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4

int triangular_inferior(double A[][4]);

int triangular_inferior(double A[][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if ((j > i) && (A[i][j] != 0)){
                return 0;
            }
        }
    }
    return 1;
}

void printMatrix(int row, int col, double mat[][4]){
    for (int i=0; i < row; i++){
        printf("\t");
        for(int j=0; j < col; j++){
            if(mat[i][j] < 0){
                printf("%.2lf  ", mat[i][j]);
            } else {
                printf("%.3lf  ", mat[i][j]);
            }
        }
        printf("\n");
     }
}

void printTestMatrix(double A[][4], double B[][4], double ID[][4], double INVA[][4]){
    printf("\nMatriz 1:\n    A =\n");
    printMatrix(4,4,A);
    printf("\nMatriz 2:\n    B =\n");
    printMatrix(4,4,B);
    printf("\nMatriz 3:\n   ID =\n");
    printMatrix(4,4,ID);
    printf("\nMatriz 4:\n INVA =\n");
    printMatrix(4,4,INVA);
    printf("\n");
}


int main(void){
    char charVar;
    int i, j, k, intVar, intVar2, result, lin, col;
    float floatVal, *floatArr, **floatPArr;
    double A[4][4]={{1, 0, 0, 0},
                    {1, 2, 0, 0},
                    {1, 2, 3, 0},
                    {1, 2, 3, 4}};

    double B[4][4]={{1, 0, 0, 1},
                    {1, 2, 0, 0},
                    {1, 2, 3, 0},
                    {1, 2, 3, 4}};

    double ID[4][4]={{1, 0, 0, 0},
                    {0, 1, 0, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 1}};

    double INVA[4][4]={{1, 0, 0, 0},
                       {-0.5, 0.5, 0, 0},
                       {0, -0.333, 0.333, 0},
                       {0, 0, -0.25, 0.25}};

    printTestMatrix(A, B, ID, INVA);
    printf("Escolha uma matriz: ");
    scanf("%d", &intVar);
    if (intVar == 1){
        result = triangular_inferior(A);
    } else if(intVar == 2){
        result = triangular_inferior(B);
    } else if(intVar == 3){
        result = triangular_inferior(ID);
    } else if(intVar == 4){
        result = triangular_inferior(INVA);
    } else{
        printf("Comando naum eh valido!");
    }

    if(result == 1){
        printf("A matriz escolhida eh triangular inferior!\n");
    } else{
        printf("A matriz escolhida nao e triangular inferior!\n");
    }
}
