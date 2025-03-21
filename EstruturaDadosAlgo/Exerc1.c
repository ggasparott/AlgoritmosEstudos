#include <stdio.h>

// Função de busca binária
int busca_binaria(int arr[], int n, int x) {
    int esquerda = 0, direita = n - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verifica se o valor no meio é o que estamos procurando
        if (arr[meio] == x) {
            return meio; // Retorna o índice do elemento encontrado
        }

        // Se o valor desejado for maior, ignore a metade esquerda
        if (arr[meio] < x) {
            esquerda = meio + 1;
        }
        // Se o valor desejado for menor, ignore a metade direita
        else {
            direita = meio - 1;
        }
    }

    return -1; // Retorna -1 se o valor não for encontrado
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15; // Valor a ser procurado

    int resultado = busca_binaria(arr, n, x);
    
    if (resultado != -1) {
        printf("Elemento encontrado no índice %d.\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
