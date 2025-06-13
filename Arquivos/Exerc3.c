#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

void salvarAlunos(Aluno *a, int n){
 FILE *f = fopen("alunos.txt", "a"); // append para não apagar anteriores
    if (f == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %d %.2f\n", a[i].nome, a[i].matricula, a[i].nota);
    }

    fclose(f);
}
void lerAlunos() {
     FILE *f = fopen("alunos.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    Aluno a;
    printf("\n=== Alunos cadastrados ===\n");

    while (fscanf(f, "%s %d %f", a.nome, &a.matricula, &a.nota) == 3) {
        printf("Nome: %s | Matrícula: %d | Nota: %.2f\n", a.nome, a.matricula, a.nota);
    }

    fclose(f);

}

void BuscarAlunoPorNome() {
    FILE *f = fopen("alunos.txt", "r"); 
    if(f == NULL){
        printf("Erro ao abrir arquivo!");
        return;
    }

    char nomeBusca[50];
    Aluno a;
    int encontrado = 0;

    while(fscanf(f,"%s %d %f", a.nome, &a.matricula, &a.nota) == 3) {
        if(strcmp(a.nome, nomeBusca) == 0) {
            printf("ALUNO ENCONTRADO!\n");
            printf("Nome: %s | Matrícula: %d | Nota: %.2f\n", a.nome, a.matricula, a.nota);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado) {
        printf("Aluno não encontrado!");
    }
    fclose(f);
}

int main() {
    int n;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    getchar(); // limpar \n

    Aluno *alunos = malloc(n * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // remove \n

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        getchar(); // limpa \n
    }

    salvarAlunos(alunos, n);
    lerAlunos();
    BuscarAlunoPorNome();

    free(alunos);
    return 0;
}
