#include <stdio.h>
#include <stdlib.h>

void multiplica(double mat1[30][30], double mat2[30][30], double matRes[30][30], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matRes[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matRes[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main(){
    int n;
    printf("Digite a ordem das matrizes: ");
    scanf("%d", &n);
    
    double mat1[30][30], mat2[30][30], matRes[30][30];
    
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat1[i][j]);
        }
    }
    
    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat2[i][j]);
        }
    }
    
    multiplica(mat1, mat2, matRes, n);
    
    printf("O resultado da multiplicação é:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matRes[i][j]);
        }
        printf("\n");
    }
    return 0;
}
