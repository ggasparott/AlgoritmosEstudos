#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_PRODUTOS 3

typedef struct{
    char nome[80];
    double preco;
    int quant;
} Produto;

void ordenaPreco(Produto vet[], int n);
void ordenaQuant(Produto vet[], int n);
void printProdut(Produto vet[], int n);

int main(){
        
    Produto produtos[MAX_PRODUTOS];
    int opcao;

    for(int i=0; i < MAX_PRODUTOS; i++){
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);  
        printf("Preço: ");
        scanf("%lf", &produtos[i].preco);
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quant);
        getchar();
    }

   printf("Digite a opção para o tipo de ordenação, 1 para ordenar preco ou 2 para ordenar quantidade: ");
   scanf("%d", &opcao);
   
   switch (opcao) {
   case 1:
    ordenaPreco(produtos, MAX_PRODUTOS);
    break;
   
   case 2:
    ordenaQuant(produtos, MAX_PRODUTOS);
    break;

   default:
    printf("Opção é invalida!"); 
   }
   printProdut(produtos, MAX_PRODUTOS);

   return 0;
}


void ordenaPreco(Produto vet[], int n){
    for(int i = 0; i < n; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(vet[j].preco > vet[min_idx].preco){
                min_idx = j;
        }
        Produto temp = vet[min_idx];
        vet[min_idx] = vet[i];
        vet[i] = temp;
    }
       
}
}

void ordenaQuant(Produto vet[], int n){
    for(int i = 0; i < n; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(vet[j].preco < vet[min_idx].preco){
                min_idx = j;
        }
        Produto temp = vet[min_idx];
        vet[min_idx] = vet[i];
        vet[i] = temp;
    }
       
}
}

void printProdut(Produto vet[], int n) {
    printf("\nLista de Alunos Ordenada:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s | preco: %.2lf | Quant: %d\n", vet[i].nome, vet[i].preco, vet[i].quant);
    }
}
