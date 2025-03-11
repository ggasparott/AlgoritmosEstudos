#include <stdio.h>
#include <stdlib.h>

double determinante2x2(double mat[2][2]){
    return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
}

int main(){
    double mat[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite os numeros na matriz [%d][%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }
    printf("O resultado da matriz determinante eh: %.0lf", determinante2x2(mat));
}
