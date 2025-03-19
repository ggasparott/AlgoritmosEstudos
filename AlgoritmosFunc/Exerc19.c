#include <stdlib.h>
#include <stdio.h>


typedef struct{
    char name[50];
    float price;
    int quantityStoraged;
} Product;

void readProducts(Product[], int);
void printProducts(Product[], int);

int main(){
    Product products[3];
    readProducts(products, 3);
    printProducts(products, 3);

    return 0;
}

void readProducts(Product prod[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite o nome do %d produto: ", i + 1);
        fgets(prod[i].name, 50, stdin);

        printf("Digite o preco do %d produto: ", i + 1);
        scanf("%f", &prod[i].price);

        printf("Digite a quantidade do %d produto no estoque: ", i + 1);
        scanf("%d", &prod[i].quantityStoraged);
        getchar();
        
    }
}

void printProducts(Product prod[], int n){
    printf("\n-----Produtos Cadastrados-----\n");
    for(int i = 0; i < n; i++){
        printf("\n-----Produto: %d-----\n", i+ 1);
        printf("O nome do %d produto: %s\n", i + 1, prod[i].name);
        printf("O preco do %d produto: %.2f\n", i + 1, prod[i].price);
        printf("A quantidade do %d produto no estoque: %d\n", i + 1, prod[i].quantityStoraged);
    }
}

