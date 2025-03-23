#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char name[50];
    int age;
    char course[50];
} student;

void readStudents(student[], int);
void printStudents(student[], int);

int main(){
    student aluno[4];

    readStudents(aluno, 4);
    printStudents(aluno, 4);
    return 0;
}

void readStudents(student al[], int n){
    printf("\n-----Cadastrar Alunos-----\n");
    for(int i = 0; i < n; i++){
        printf("\nDigite o nome do %d aluno: ", i + 1);
        fgets(al[i].name, 50, stdin);

        printf("Digite a idade do %d aluno: ", i + 1);
        scanf("%d", &al[i].age);
        getchar();

        printf("Digite o curso do %d aluno: ", i + 1);
        fgets(al[i].course, 50, stdin);

        
    }
}

void printStudents(student al[], int n){
    printf("\n-----Alunos Cadastrados-----\n");
    for(int i = 0; i < n; i++){
        printf("\n----Aluno %d----\n", i + 1);
        printf("O nome do %d aluno: %s\n", i + 1, al[i].name);
        printf("A idade do %d aluno: %d\n", i + 1, al[i].age);
        printf("O curso do %d aluno: %s\n", i + 1, al[i].course);
    }
}