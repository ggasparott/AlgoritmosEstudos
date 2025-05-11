#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    int status; // 0 = pendente, 1 = concluída
} Tarefa;

void adicionarTarefa(Tarefa** tarefas, int* qtd);
void listarTarefas(Tarefa* tarefas, int qtd);
void marcarTarefaConc(Tarefa* tarefas, int qtd);



int main() {
    Tarefa* tarefas = NULL; 
    int qtd = 0;
    int sair = 0;
    

    
    while(1) {
        printf("1. Adicionar Tarefa\n 2. Listar Tarefas\n 3. Marcar Tarefa Concluida\n 4. Sair do programa\n Escolha sua opção: ");
        scanf("%d", &sair);
    
        switch (sair) {
            case 1:
                adicionarTarefa(&tarefas, &qtd);
                break;
            case 2:
                if (qtd == 0) {
                    printf("Nenhuma tarefa adicionada ainda.\n");
                } else {
                    listarTarefas(tarefas, qtd);
                }
                break;
            case 3:
                marcarTarefaConc(tarefas, qtd);
                break;
            case 4:
                free(tarefas);
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida!\n");
        }
        


    


    }
}


void adicionarTarefa(Tarefa** tarefas, int* qtd) {
    *tarefas = realloc(*tarefas, (*qtd + 1) * sizeof(Tarefa));
    if(*tarefas == NULL) {
        printf("ERRO\n");
        exit(1);
    }
    printf("Digite o nome da tarefa: ");
    getchar();
    fgets((*tarefas)[*qtd].titulo, 100, stdin);
    (*tarefas)[*qtd].titulo[strcspn((*tarefas)[*qtd].titulo, "\n")] = '\0';
    (*tarefas)[*qtd].status = 0;
    (*qtd)++;
    printf("Tarefa adicionada com sucesso!\n");
    
}
void listarTarefas(Tarefa* tarefas, int qtd) {
    printf("\n----Listando Tarefas----\n");
    for(int i = 0; i < qtd; i++) {
        printf("%d. %s [%s]\n", i + 1, tarefas[i].titulo,
            tarefas[i].status == 0 ? "Pendente" : "Concluída\n");
    }

}
void marcarTarefaConc(Tarefa* tarefas, int qtd) {
    int indice;
    listarTarefas(tarefas, qtd);
    printf("Digite o indice que voce deseja mudar: ");
    scanf("%d", &indice);
    if(indice < 1 || indice > qtd){
        printf("Indice invalido!\n");
        return;
    }
    tarefas[indice - 1].status = 1;
    printf("Tarefa Atualizada com sucesso!");
}