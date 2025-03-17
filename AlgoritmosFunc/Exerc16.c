#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char model[50];
    int year;
    int price;
} Car;

void lerCarros(Car carros[], int n) {
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do modelo do carro: ");
        scanf(" %[^\n]", carros[i].model);  // Corrigido para ler espaços

        printf("Enter the car year: ");
        scanf("%d", &carros[i].year);

        printf("Enter the car price: ");
        scanf("%d", &carros[i].price);
    }
}

Car* carroMaisCaro(Car carros[], int n){
    int indiceMaior = 0;
    for(int i = 1; i < 3; i++){
        if(carros[i].price > carros[indiceMaior].price){
            indiceMaior = i;
        }
    }
    return &carros[indiceMaior];
}

int main(){
    Car carros[3];

    lerCarros(carros, 3);

    for (int i = 0; i < 3; i++) {
        printf("Model: %s\n", carros[i].model);
        printf("Year: %d\n", carros[i].year);
        printf("Price: %d\n", carros[i].price);
    }

    Car* maisCaro = carroMaisCaro(carros, 3);
    printf("O carro mais caro é: %s, custando %d\n", maisCaro->model, maisCaro->price);

    return 0;
}
