#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[2][2];
    
    printf("Digite os valores da matriz 2x2\n");
    // This nested loop will iterate over the matrix and ask for the user to input the values
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            printf("[%d][%d] : %d\n",i, j, mat[i][j]);
        }
        
    }

    // traverse the matrix and print the values
    for (int j=0; j<2; j++){
        for (int i=0; i<2; i++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}