#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Algoritmo que inverte os elementos de um vetor
    int vect[6], temp;

    for(int i = 0; i < 6; i++){ // input the values
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vect[i]);
    }

    for(int i=0; i<3; i++){ // invert the values}
        temp = vect[i];
        vect[i] = vect[5-i];
        vect[5-i] = temp;
        
    }
   
    for(int i = 0; i < 6; i++){ // print the values
        printf("%d ", vect[i]);
    }
}

