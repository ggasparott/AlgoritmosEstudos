#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Algoritmo que substitui os espacos de uma string por underline
int main(){
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = '_';
    }

 }
    
    printf("String modificada: %s\n", str);
}   