#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD

typedef struct{
=======
#include <string.h>

typedef struct {
>>>>>>> 4cfd93b479d3790d818714b69ac45f4a3d930abe
    char model[50];
    int year;
    int price;
} Car;

<<<<<<< HEAD
int main(){
    Car car[5];
    int i;
    for(i = 0; i < 2 ; i++){
        printf("Enter the car model: ");
        scanf(" %49[^\n]", car[i].model);
        printf("Enter the car year: ");
        scanf("%d", &car[i].year);
        printf("Enter the car price: ");
        scanf("%d", &car[i].price);
    }

    for(i = 0; i < 2 ; i++){
        printf("Model: %s\n", car[i].model);
        printf("Year: %d\n", car[i].year);
        printf("Price: %d\n", car[i].price);
    }

    return 0;

}
=======
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
>>>>>>> 4cfd93b479d3790d818714b69ac45f4a3d930abe
