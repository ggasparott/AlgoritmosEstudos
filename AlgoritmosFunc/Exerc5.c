#include <stdlib.h>
#include <stdio.h>

void transposta(double mat1[30][30], double matRes[30][30], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matRes[j][i] = mat1[i][j];
        }
    }
    printf("Matriz transposta:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", matRes[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    double mat1[30][30], matRes[30][30];
    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%lf", &mat1[i][j]);
        }
    }
    transposta(mat1, matRes, n);
    printf("Matriz original:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", mat1[i][j]);
        }
        printf("\n");
    }
}