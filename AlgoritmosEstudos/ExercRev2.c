#include <stdlib.h>
#include <stdio.h>

typedef struct { 
    char nome[30];
    float preco;
    int quantidade;
} Produto;

void readProducts(Produto[], int);
void printProducts(Produto[], int);
Produto maisCaro(Produto prod[], int n);

int main(){
    Produto products[3];
    readProducts(products, 3);
    printProducts(products, 3);

    Produto top = maisCaro(products, 3);
    printf("\n===== PRODUTO MAIS CARO =====\n");
    printf("Nome: %s", top.nome); // o fgets já armazena com \n, então não precisa de \n aqui
    printf("Preço: %.2f\n", top.preco);
    printf("Quantidade: %d\n", top.quantidade);


    return 0;
}

void readProducts(Produto prod[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite o nome do %d produto: ", i + 1);
        getchar();
        fgets(prod[i].nome, 30, stdin);

        printf("Digite o preco do %d produto: ", i + 1);
        scanf("%f", &prod[i].preco);

        printf("Digite a quantidade do %d produto no estoque: ", i + 1);
        scanf("%d", &prod[i].quantidade);
        
        
    }
}

void printProducts(Produto prod[], int n){
    printf("\n-----Produtos Cadastrados-----\n");
    for(int i = 0; i < n; i++){
        printf("\n-----Produto: %d-----\n", i+ 1);
        printf("O nome do %d produto: %s\n", i + 1, prod[i].nome);
        printf("O preco do %d produto: %.2f\n", i + 1, prod[i].preco);
        printf("A quantidade do %d produto no estoque: %d\n", i + 1, prod[i].quantidade);
    }
}

Produto maisCaro(Produto prod[], int n){
    printf("\n====Produto mais caro====\n");
    int i, maiscaro = 0;
    for(i = 1; i < n; i++) {
        if(prod[i].preco > prod[maiscaro].preco) {
            maiscaro = i;
        }
    }
    return prod[maiscaro];

}
