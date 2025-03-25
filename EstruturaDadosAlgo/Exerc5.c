#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
    int rg;
    int cpf;
    char nome[80];
} Pessoa;

void ordena(Pessoa cadastro[], int n);
int buscabin(Pessoa cadastro[], int n, int x);
void imprimi(Pessoa cadastro[], int n);

int main(){
    Pessoa cadastro[3];

    printf("\n====Cadastro====\n");
    for(int i = 0; i < 3; i++){
        printf("Cadastro Pessoa %d\n", i + 1);
        printf("Digite o rg: ");
        scanf("%d", &cadastro[i].rg);

        printf("Digite o cpf: ");
        scanf("%d", &cadastro[i].cpf);
        getchar();
        printf("Digite o nome: ");
        scanf("%[^\n]", cadastro[i].nome);
       
    }

    imprimi(cadastro, 3);
    ordena(cadastro, 3);
    imprimi(cadastro, 3);
    int rgProcure = 122;
    int indice = buscabin(cadastro, 3, rgProcure);

    if(indice != -1){
        printf("Pessoa encontrada");
    } else {
        printf("Pessoa do RG: %d nao encontrada", rgProcure);
    }
    


}

void imprimi(Pessoa cadastro[], int n){
    printf("\n====PESSOAS CADASTRADAS====\n");
    for(int i = 0; i < n; i ++){
        printf("Pessoa %d: | Nome: %s | Cpf: %d | RG: %d\n ", i + 1, cadastro[i].nome, cadastro[i].cpf, cadastro[i].rg);
    }
}



// Função de Insertion Sort
void ordena(Pessoa cadastro[], int n) {
    for (int i = 1; i < n; i++) {
        Pessoa chave = cadastro[i];  // Elemento a ser inserido
        int j = i - 1;
        
        // Move os elementos maiores que a chave para frente
        while (j >= 0 && cadastro[j].rg > chave.rg) {
            cadastro[j + 1] = cadastro[j];
            j--;
        }
        
        cadastro[j + 1] = chave;  // Insere o elemento na posição correta
    }
}

int buscabin(Pessoa cadastro[], int n, int x) {
    int esquerda = 0, direita = n - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verifica se o valor no meio é o que estamos procurando
        if (cadastro[meio].rg == x) {
            return meio; // Retorna o índice do elemento encontrado
        }

        // Se o valor desejado for maior, ignore a metade esquerda
        if (cadastro[meio].rg < x) {
            esquerda = meio + 1;
        }
        // Se o valor desejado for menor, ignore a metade direita
        else {
            direita = meio - 1;
        }
    }

    return -1; // Retorna -1 se o valor não for encontrado
}