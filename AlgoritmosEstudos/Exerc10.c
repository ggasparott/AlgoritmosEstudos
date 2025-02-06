#include <stdio.h>
#include <stdlib.h>

// Multiplicação Matriz
int main(){
    int mat[2][2], mat2[2][2], mat3[3][3], result;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz 1 na posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz 2 na posicao [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                result += mat[i][k] * mat2[k][j];
            }
           mat3[i][j] = result;
           result = 0;
        }
    }
    printf("\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }



}
