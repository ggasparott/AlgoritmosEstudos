#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void concatenacao( char *str1, char *str2, char *resultado){
    while(*str1 != '\0'){
        *resultado = *str1;
        resultado++;
        str1++;

    }
    while(*str2 != '\0'){
        *resultado = *str2;
        resultado++;
        str2++;
    }

    *resultado = '\0';
}

int main(){
    char *str1 = "Pica";
    char *str2 = "Mole!";
    char resultado[100]; 
    
    concatenacao(str1, str2, resultado);

    printf("A concatenacao eh: %s", resultado);
}