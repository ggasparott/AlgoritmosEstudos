#include <stdlib.h>
#include <stdio.h>


typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void atualizarAluno(Aluno *a, int novaIdade, float novaNota);

int main(){
    Aluno aluno1;
    int novaIdade;
    float novaNota;

    // Lendo os dados do aluno
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno1.nome);  // Lê uma string com espaços

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno1.nota);

    // Exibindo os dados armazenados
    printf("\nAluno cadastrado:\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.1f\n", aluno1.nota);


    printf("Digite a nova idade: ");
    scanf("%d", &novaIdade);
    printf("Digite a nova nota: ");
    scanf("%f", &novaNota);

    atualizarAluno(&aluno1, novaIdade, novaNota);
    printf("\nDepois da atualização:\n");
    printf("Nome: %s\nIdade: %d\nNota: %.1f\n", aluno1.nome, aluno1.idade, aluno1.nota);
    return 0;
}

void atualizarAluno(Aluno *a, int novaIdade, float novaNota) {
    a->idade = novaIdade;
    a->nota = novaNota;
}



