#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int RA;
    int idade;

} Aluno;

void lerAluno(Aluno[], int);
void imprimirAluno(Aluno[], int);
void mediaIdade(Aluno[], int);

int main(){
    Aluno estudante[5];
    lerAluno(estudante, 5);
    imprimirAluno(estudante, 5);
    mediaIdade(estudante, 5);

<<<<<<< HEAD
=======
    return 0;
>>>>>>> f6ddbbb1d391846a1f1786d421f74efcac35f3d1
}

void lerAluno(Aluno estudante[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Digite o RA do aluno: ");
        scanf("%d", &estudante[i].RA);
        printf("Digite a idade do aluno: ");
        scanf("%d", &estudante[i].idade);
    }
}

void imprimirAluno(Aluno estudante[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("RA: %d\n", estudante[i].RA);
        printf("Idade: %d\n", estudante[i].idade);
    }

}

void mediaIdade(Aluno estudante[], int n){
    int i;
    float media = 0;
    for(i = 0; i < n; i++){
        media += estudante[i].idade;
    }
<<<<<<< HEAD
    media = media/n;
    printf("Media de idade: %.2f\n", media);
}
=======
    media = media / n;
    printf("Media de idade: %.2f\n", media);
}
cz esse código é simples
>>>>>>> f6ddbbb1d391846a1f1786d421f74efcac35f3d1
