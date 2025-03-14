#include <stdio.h>


typedef struct { 
    int vect[3];  
    int value;            
} Register;

Register lerRegistro(){
    Register reg;
    reg.value = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d", &reg.vect[i]);
        reg.value += reg.vect[i];
    }
    return reg;
    
}

void imprimirRegistro(Register reg){
    for(int i = 0; i < 3; i++){
        printf("O valores do vetor são: %d\n", reg.vect[i]);
    }
    printf("\nO valor da soma dos elementos do vetor são: %d", reg.value);

}

int main(){
    Register reg;

   reg = lerRegistro(reg);
   imprimirRegistro(reg); 
    
}