#include <stdio.h>
#include <stdlib.h>

int magico(int mat[30][30], int n) {
    
    int s_ref = 0;
    for (int j = 0; j < n; j++) {
        s_ref += mat[0][j]; 
    }

    // Verifica se a soma das linhas, colunas e diagonais é igual a s_ref
    for (int i = 1; i < n; i++) {
        int somaLinha = 0;
        for (int j = 0; j < n; j++) {
            somaLinha += mat[i][j];
        }
        if (somaLinha != s_ref)   
            return 0;
    }
     
    

    for (int j = 0; j < n; j++) {
        int somaColuna = 0;
        for (int i = 0; i < n; i++) {
            somaColuna += mat[i][j];
        }
        if (somaColuna != s_ref) 
            return 0;
    }
    
    
    int somaDiag1 = 0;
    for (int i = 0; i < n; i++) {
        somaDiag1 += mat[i][i];
    }
    if (somaDiag1 != s_ref) 
        return 0;

    int somaDiag2 = 0;
    for (int i = 0; i < n; i++) {
        somaDiag2 += mat[i][n - i - 1];
    }
    if (somaDiag2 != s_ref){     
        return 0;
    }
   
    return 1;
}

int main() {
    int n;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);
    
    int mat[30][30];
    
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    

    if (magico(mat, n)) {
        printf("A matriz eh um quadrado magico.\n");
    } else {
        printf("A matriz não eh um quadrado magico.\n");
    }

    return 0;
}
