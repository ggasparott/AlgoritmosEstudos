#include <stdio.h>
#include <stdlib.h>

int main(){ // odernar vetor com algoritmo booble sort // comparação // repetição // iteração / / repetição de passos
    int vect[5];


    for(int i = 0; i < 5; i++){ // input the values
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vect[i]);
    }

    for(int i = 0; i < 5; i++){ // sort the values
        if(vect[i] > vect[i+1]){
            int temp = vect[i];
            vect[i] = vect[i+1];
            vect[i+1] = temp;
        }

    }

    for(int i = 0; i < 5; i++){ // print the values
        printf("%d ", vect[i]);
    }
}