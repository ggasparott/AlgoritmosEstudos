#include <stdlib.h>
#include <stdio.h>

double media(double v[], int tam);

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
    printf("A media dos valores do vetor eh: %.2lf\n", media(v, tam));
    free(v);
}

double media(double v[], int tam){
    double soma = 0;
    for(int i = 0; i < tam; i++){
        soma += v[i];
    }
    soma /= tam;
    return soma;
}