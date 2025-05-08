#include <stdlib.h>
#include <stdio.h>

void inputVendas(double* v, int n);
double calcMedia(double* v, int n);
int contaAcimaDaMedia(double* v, int n, double media);

int main() {
    int vendas, vendasAcima;
    double media;
    printf("Quantas vendas foram feitas hoje?: ");
    scanf("%d", &vendas);

    double* v = (double*) malloc(vendas * sizeof(double));

    if(v == NULL) { 
        printf("Alocacao Falhou");
        return 1;
    }
    
    inputVendas(v, vendas);
    media = calcMedia(v, vendas);
    printf("O valor da media foi: %.2lf\n", media);
    vendasAcima = contaAcimaDaMedia(v, vendas, media);

    printf("A quantidade de vendas acima da media foi: %d\n", vendasAcima);

    free(v);
    return 0;
    
}

void inputVendas(double* v, int n) {
    printf("\n---VALOR DAS VENDAS---\n");
    for(int i = 0; i < n; i++) {
        printf("Digite o valor da venda %d: ", i + 1);
        scanf("%lf", &v[i]);
    }

}
double calcMedia(double* v, int n) {
    double soma = 0.0;
    printf("\n----Calculando Media----\n");
    for(int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int contaAcimaDaMedia(double* v, int n, double media) {
    int vendasAcima = 0;
    printf("\n----Contas Acima da Media----\n");
    for(int i = 0; i < n; i++) {
        if(v[i] > media) {
            vendasAcima++;
        }
    }
    return vendasAcima;
}
