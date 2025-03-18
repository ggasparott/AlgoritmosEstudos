#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char model[50];
    int year;
    int price;
} Car;

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