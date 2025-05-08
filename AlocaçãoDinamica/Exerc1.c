#include <stdlib.h>
#include <stdio.h>

double calcMedia(double* v, int n);
void classificaTemperatura(double* v, int n, double media);
void inputTemperaturas(double* v, int n);

int main(){
    double* v;
    double media;
    int n;
    printf("Digite quantos elementos serao digitados: ");
    scanf("%d", &n);

    v = (double*) malloc(n * sizeof(double));

    if(v == NULL) {
        printf("Alocacao Falhou");
        return 1;
    }

    inputTemperaturas(v, n);
    media = calcMedia(v, n);
    printf("A média é: %.2lf\n", media);
    classificaTemperatura(v, n, media);

    free(v);
    return 0;



}


double calcMedia(double* v, int n) {
    double soma = 0.0;
    printf("Calculando media\n");
    for(int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
    
}
void classificaTemperatura(double* v, int n, double media) {
    printf("Classificando as temperatudas\n");
    for(int i = 0; i < n; i++) {
        if(v[i] < media) {
            printf("Frio\n");
        }
        if(v[i] == media) {
            printf("Morno\n");
        }
        if(v[i] > media) {
            printf("Calor\n");
        }
        
    }
}
void inputTemperaturas(double* v, int n) {
    printf("Input das temps\n");
    for(int i = 0; i < n; i++) {
        printf("Input %d", i + 1);
        scanf("%lf", &v[i]);
    }
}

