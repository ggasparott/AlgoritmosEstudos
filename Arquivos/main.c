#include <stdio.h>
#include "Complexo.h"

int main() {
    int opcao;
    Complexo* a = criaComplexo(2, -1);
    Complexo* b = criaComplexo(1, 3);
    Complexo* resultado = NULL;

    printf("Digite a opcao que voce deseja:\n 1 - soma\n 2 - subtracao\n 3 - multiplicacao\n 4 - divisao\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = somaComplexo(a, b);
            imprimeComplexo(resultado);
            break;
        case 2:
            resultado = subtraiComplexo(a, b);
            imprimeComplexo(resultado);
            break;
        case 3:
            resultado = multiplicaComplexo(a, b);
            imprimeComplexo(resultado);
            break;
        case 4:
            resultado = divideComplexo(a, b);
            imprimeComplexo(resultado);

            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    
    liberaComplexo(a);
    liberaComplexo(b);

    return 0;
}
