#include <stdio.h>
#include <stdlib.h>

int main(){ // Algoritmo que calcula a media de um vetor de inteiros
    int n;
    float media, soma = 0;
    
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / n;
    printf("A media dos numeros digitados foi: %.2f\n", media);
    



}