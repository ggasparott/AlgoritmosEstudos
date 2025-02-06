#include <stdio.h>
#include <stdlib.h>

// Produto Interno entre Vetores
int main (){
    int vect1[5], vect2[5], productIntern = 0;

    // input the values 1
    for(int i = 0; i < 5; i++){ 
        printf("Digite o %d numero do vetor 1: ", i + 1);
        scanf("%d", &vect1[i]);
    }
    printf("\n");
    // input the values 2
    for(int i = 0; i < 5; i++){ 
        printf("Digite o %d numero do vetor 2: ", i + 1);
        scanf("%d", &vect2[i]);
    }
    // Product Intern // Um for que percorre todos so vects e multiplica os valores de mesmo indice
    for(int i = 0; i < 5; i++){
        productIntern += vect1[i] * vect2[i];
    }
    // exibe o resultado do produto interno
    printf("Produto Interno: %d\n", productIntern);




}