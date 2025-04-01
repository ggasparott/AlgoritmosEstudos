#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int estoque;
} Produto;

void imprimiProd(Produto *a, int n);
void atualizaProd(Produto *a, int n);

int main(){
    
    int n;
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &n);
    Produto *produtos = malloc(n * sizeof(Produto));
    
    if (produtos == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;

    }

    for(int i = 0; i < n; i++){
        printf("\n====Produto %d====\n", i + 1);
        getchar();
        printf("Digite o nome do Produto: ");
        scanf(" %[^\n]", produtos[i].nome);
        

        printf("Digite o preco: ");
        scanf("%f", &produtos[i].preco);

        
        printf("Digite a quant: ");
        scanf("%d", &produtos[i].estoque);

    }

    imprimiProd(produtos, n);
    atualizaProd(produtos, n);
    imprimiProd(produtos, n);

    free(produtos);
}

void imprimiProd(Produto *a, int n) {
    for(int i = 0; i < n; i++){
        printf("\nProduto %d\n", i + 1);
        printf("Nome: %s | Preco: %.2f | Quant: %d\n", a[i].nome, a[i].preco, a[i].estoque);
    }
}

void atualizaProd(Produto *a, int n) {
    char NomeProd[50];
    int indice = -1;
    printf("Digite o nome do produto que deseja atualizar: ");
    getchar();
    fgets(NomeProd, 50, stdin);
    NomeProd[strcspn(NomeProd, "\n")] = '\0';
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].nome, NomeProd) == 0) {
            indice = i;
        }
    }
    if(indice != -1){
        printf("Digite o novo preço: ");
        scanf("%f", &a[indice].preco);
        printf("Digite a nova quantidade: ");
        scanf("%d", &a[indice].estoque);
    }
    
}