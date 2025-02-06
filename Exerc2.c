#include <stdio.h>
#include <stdlib.h>

// Algoritmo que soma os elementos de um vetor
int main(){
    int vect[5];
    int cont=0;

    for (int i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vect[i]);
        cont+=vect[i];
    }
    printf("A soma dos numeros eh: %d\n", cont);
    
}