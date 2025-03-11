#include <stdio.h>
#include <stdlib.h>

void matsoma(double mat1[30][30], double mat2[30][30], double matRes[30][30], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matRes[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Matriz soma:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", matRes[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    double mat1[30][30], mat2[30][30], matRes[30][30];
    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao [%d][%d] da matriz 1: ", i, j);
            scanf("%lf", &mat1[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao [%d][%d] da matriz 2: ", i, j);
            scanf("%lf", &mat2[i][j]);
        }
    }
    matsoma(mat1, mat2, matRes, n);
    printf("Matriz 1:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}