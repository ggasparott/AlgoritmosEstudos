#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double desvioPadrao(double v[], int tam){
    double somaS = 0;
    for(int i = 0; i < tam; i++){
        somaS += v[i];
    }

    double somaQ = 0;
    for(int i = 0; i < tam; i++){
        somaQ += pow(v[i], 2);
    }

    double variancia = (somaQ - (pow(somaS, 2) / tam)) / (tam - 1);
    return sqrt(variancia);
}

int main(){
    int tam;
    double *v;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    v = (double *) malloc(tam * sizeof(double));
    for(int i = 0; i < tam; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &v[i]);
    }
    printf("O desvio padrao dos valores do vetor eh: %.2lf\n", desvioPadrao(v, tam));
    free(v);
}
