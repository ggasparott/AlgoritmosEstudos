#include <stdlib.h>
#include <stdio.h>
#include <math.h>


double media(double vet[], int n, int *i);

int main(){
    int n;
    int i = 0;
    
    printf("Digite quantos elementos vao ter no vetor: ");
    scanf("%d", &n);

    double *vet = (double *) malloc(n * sizeof(double));
    
    if(vet == NULL) {
        printf("Alocacao falha");
    }

    for(int i = 0; i < n; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%lf", &vet[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%lf\n", vet[i]);
    }
    double resultado = media(vet, n, &i);


    printf("A média é: %.2f\n", resultado);
    printf("O índice do valor mais próximo da média é: %d\n", i);

    free(vet);

}


double media(double vet[], int n, int *i) {
    int soma = 0.0;
    for(int i = 0; i < n; i++) {
        soma+=vet[i];
    }
    double med = soma / n;
    double menor_diff = fabs(vet[0] - med); 
    *i = 0;
    for(int j = 1; j < n; j++) {
        double diferenca = fabs(vet[j] - med);
        if(diferenca < menor_diff){
            menor_diff = diferenca;
            *i = j;
        }

    }
    return med;
}
