#include <stdlib.h>
#include <stdio.h>

void rotaciona90(double mat[30][30], double matRes[30][30], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matRes[j][n-i-1] = mat[i][j];
        }
    }
}

int main(){
    double mat[30][30], matRes[30][30];
    int n;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    printf("Digite os elementos da matriz: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%lf", &mat[i][j]);
        }
    }
    rotaciona90(mat, matRes, n);
    printf("Matriz rotacionada 90 graus: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.2lf ", matRes[i][j]);
        }
        printf("\n");
    }
    return 0;
}