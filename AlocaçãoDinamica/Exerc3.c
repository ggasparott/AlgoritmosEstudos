#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numeros;
    int tamanho = 3;
    int count = 0;
    char continuar;

    // Alocação inicial de 3 inteiros
    numeros = (int*) malloc(tamanho * sizeof(int));
    if (numeros == NULL) {
        printf("Falha na alocação inicial!\n");
        return 1;
    }

    // Inserção dos 3 primeiros números
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        count++;
    }

    // Loop para adicionar mais números
    while (1) {
        printf("Deseja adicionar mais um número? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            break;
        }

        // Tenta realocar memória
        int* temp = realloc(numeros, (count + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao realocar memória!\n");
            free(numeros);
            return 1;
        }
        numeros = temp;

        // Pede o novo número
        printf("Digite o novo numero: ");
        scanf("%d", &numeros[count]);
        count++;
    }

    // Mostra todos os números inseridos
    printf("\n--- Números inseridos ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);
    return 0;
}
