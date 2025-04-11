#include <stdlib.h>
#include <stdio.h>

// Exerc 1:
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void verificaNotaAluno(Aluno *notas, int tam);
void imprimeAlunos(Aluno alunos[], int n);

int main(){
    Aluno aluno[3];
    printf("\n====Cadastro de Alunos====\n");
    for(int i = 0; i < 3; i++){
        printf("\n====Aluno %d====\n", i + 1);
        printf("Digite a nome do aluno %d: ", i + 1);
        getchar();
        fgets(aluno[i].nome, 50, stdin);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &aluno[i].nota);
    }
    imprimeAlunos(aluno, 3);

    verificaNotaAluno(aluno, 3);

}

void verificaNotaAluno(Aluno *notas, int n) {
    for(int i = 0; i < n; i++){
        printf("Verificando nota do aluno %d: ", i + 1);
        if(notas[i].nota > 7){
            printf("\nO Aluno %d tirou mais que 7!\n", i + 1);
        }
    }
}

void imprimeAlunos(Aluno alunos[], int n){
    printf("\n====Imprimindo os alunos====\n");
    for(int i = 0; i < n; i++){
        printf("\n====Imprimindo o Aluno %d ====\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }
}