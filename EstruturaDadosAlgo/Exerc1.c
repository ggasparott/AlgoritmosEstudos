#include <stdio.h>
#define MAX_TAM 10

// Função de busca binária
int busca_binaria(int arr[], int n, int x, int posicoes[]) {
    int esquerda = 0, direita = n - 1;
    int count = 0;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        
        if (arr[meio] == x) {
            posicoes[count++] = meio; 

            int temp = meio - 1;
            while (temp >= 0 && arr[temp] == x) {
                posicoes[count++] = temp;
                temp--;
            }

           
            temp = meio + 1;
            while (temp < n && arr[temp] == x) {
                posicoes[count++] = temp;
                temp++;
            }

            break; 

        }

        
        if (arr[meio] < x) {
            esquerda = meio + 1;
        }
        
        else {
            direita = meio - 1;
        }
    }

    return count; 
}

int main() {
    int arr[] = {15, 3, 5, 7, 9, 15, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15; 
    int posRep[MAX_TAM];
    int resultado = busca_binaria(arr, n, x, posRep);
    
    if (resultado  > 0) {
        
        for(int i = 0; i < resultado; i++){
            printf("Os elementos repitidos foram encotrados nos indices: %d", posRep[i]);
        }
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
