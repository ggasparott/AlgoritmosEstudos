#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char Titulo[50];
    char Autor[50];
    int anoPublicacao;
    float preco;
} Livros;

void lerLivros(Livros livros[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nDigite o titulo do livro: ");
        scanf(" %[^\n]", livros[i].Titulo);  

        printf("Digite o nome do autor: ");
        scanf(" %[^\n]", livros[i].Autor);

        printf("Digite o ano de publicação: ");
        scanf("%d", &livros[i].anoPublicacao);
        getchar(); 

        printf("Digite o preco do livro: ");
        scanf("%f", &livros[i].preco);
        getchar(); 
    }
}

void exibirLivros(Livros livros[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Livro %d ---\n", i + 1);
        printf("Título: %s\n", livros[i].Titulo);
        printf("Autor: %s\n", livros[i].Autor);
        printf("Ano de publicação: %d\n", livros[i].anoPublicacao);
        printf("Preço: R$%.2f\n", livros[i].preco);
    }
}

int main() {
    int n = 4;
    Livros livros[4];

    lerLivros(livros, n);
    exibirLivros(livros, n);

    return 0;
}
