#include <stdio.h>  

typedef struct {
    char nome[50];
    int idade;
} jogador;

typedef struct {
    char nome[50];
    int anodefundacao;
    jogador jogadores[4];  // Cada time tem 4 jogadores
} time; 

void lerTimes(time times[], int n);
void imprimirTimes(time times[], int n);

int main() {
    time times[2];
    lerTimes(times, 2);
    imprimirTimes(times, 2);
    return 0;
}

void lerTimes(time times[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do time %d: ", i + 1);
        scanf(" %[^\n]", times[i].nome);  
        
        printf("Digite o ano de fundação do time: ");
        scanf("%d", &times[i].anodefundacao);

        printf("\n--- Cadastro dos jogadores do %s ---\n", times[i].nome);
        for (int j = 0; j < 4; j++) {
            printf("Digite o nome do jogador %d: ", j + 1);
            scanf(" %[^\n]", times[i].jogadores[j].nome);  
            
            printf("Digite a idade do jogador: ");
            scanf("%d", &times[i].jogadores[j].idade);
        }
    }
}

void imprimirTimes(time times[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Time %d ---\n", i + 1);
        printf("Nome: %s\n", times[i].nome);
        printf("Ano de fundação: %d\n", times[i].anodefundacao);
        printf("Jogadores:\n");
        for (int j = 0; j < 4; j++) {
            printf("  Nome: %s | Idade: %d\n", times[i].jogadores[j].nome, times[i].jogadores[j].idade);
        }
    }
}
