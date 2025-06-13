#include <stdlib.h>
#include <stdio.h>


typedef struct {
    char nome[30];
    int RA;
    
} Aluno;

void cadastrarAlunos(Aluno al[], int n) {
    printf("\n====Cadastro de Alunos====\n");
    for(int i = 0; i < n; i++){
        printf("\n====Cadastro do aluno %d ====\n", i + 1);
        printf("Digite o nome do aluno %d: ", i + 1);
        getchar();
        fgets(al[i].nome, 30, stdin);

        printf("Digite o RA do aluno %d: ", i + 1);
        scanf("%d", &al[i].RA);

        printf("Digite a nota da prova 1: ");
        scanf("%f", &al[i].nota.p1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &al[i].nota.p2);
        printf("Digite a nota da prova 3: ");
        scanf("%f", &al[i].nota.p3);
        
        al[i].media = (al[i].nota.p1 + al[i].nota.p2 + al[i].nota.p3) / 3.0;
    }
    
}

void imprimirAprovados(Aluno alunos[], int n) {
    printf("\n====Imprimindo Aprovados====\n");
    for(int i = 0; i < n; i++) {
        if(alunos[i].media > 7){
            printf("O aluno %s foi APROVADO!\n", alunos[i].nome);
        } else {
            printf("O aluno %s foi Reprovado\n", alunos[i].nome);
        }

    }
}

