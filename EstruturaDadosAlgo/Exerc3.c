#include <stdlib.h>
#include <stdio.h>

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

void ordena(Data vet[], int tam);
void imprimi(Data vet[], int tam);

int main(){
    Data date[3];

    // ler meu vetor data
    for(int i = 0; i < 3; i++){
        printf("\n====Declara a data %d====\n ", i + 1);
        printf("Digite o dia da data %d: ", i + 1);
        scanf("%d", &date[i].dia);

        printf("Digite o mes da data %d: ", i + 1);
        scanf("%d", &date[i].mes);

        printf("Digite o ano da data %d: ", i + 1);
        scanf("%d", &date[i].ano);
    }

    ordena(date, 3);
    imprimi(date, 3);
}


void ordena(Data vet[], int tam){
    //ordenamos elemento por cada elemento
    for(int i = 0; i < tam - i - 1; i++){
        for(int j = 0; j < tam; j++){
            if (vet[j].ano > vet[j + 1].ano ||
                (vet[j].ano == vet[j + 1].ano && vet[j].mes > vet[j + 1].mes) ||
                (vet[j].ano == vet[j + 1].ano && vet[j].mes == vet[j + 1].mes && vet[j].dia > vet[j + 1].dia)) 
             {
                 
                 Data temp = vet[j];
                 vet[j] = vet[j + 1];
                 vet[j + 1] = temp;
             }
        }
    }
}

void imprimi(Data vet[], int tam) {
    printf("\n====IMPRIMINDO DATAS====\n");
    for(int i = 0; i < tam; i++){
        printf("Data %d: %02d/%02d/%d\n", i + 1, vet[i].dia, vet[i].mes, vet[i].ano);
    }
}
