#include <stdlib.h>
#include <stdio.h>

double calcMedia(double* v, int n);
double comparaEle(double* v, int n, double media);

int main() {
    int n;
    double media = 0.0;
    double elementMaior = 0.0;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    
    double* v = (double*) malloc(n * sizeof(double));

    if(v == NULL) {
        printf("Alocacao Falhou!");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("Digite o valor: %d", i + 1);
        scanf("%lf", &v[i]);
    }
    media = calcMedia(v, n);
    elementMaior = comparaEle(v, n, media);
    printf("A media é : %.2lf\n", media);
    printf("A quantidade de elementos maiores são: %.2lf\n", elementMaior);
    free(v);
    return 0;

}

double calcMedia(double* v, int n){
    double soma = 0.0;
    printf("Calculando Media");
    for(int i = 0; i < n; i++) {
        printf("\nCalculando\n");
        soma += v[i];
    }
    return soma / n;
}
double comparaEle(double* v, int n, double media){
    
    double count = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] > media) {
            count++;
        }
    }
    return count;
}