#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// Algoritmo para descobrir se a string é políndromo
int main(){
    char strOrigin[100];
    char strInvert[100];
    bool palindromo = true;
    
    printf("Digite uma string: ");
    scanf("%s", strOrigin); // Utilização do scanf para pegar a string sem espaço, ou seja uma palavra
    
    
    int tamanho = strlen(strOrigin);

    // para inverter a string
    for(int i = 0; i < tamanho ; i++){
        strInvert[i] = strOrigin[tamanho - i - 1];
    }

    strInvert[tamanho] = '\0'; // Finaliza corretamente a string


    // Verificando se a string é um palindromo
    for(int i = 0; i < tamanho; i++){
        if(strOrigin[i] != strInvert[i]){
            palindromo = false;
        }
    }

    // Se a variável palindromo for verdadeira, a string é um palindromo
    if(palindromo){
        printf("A string eh um palindromo: %s\n", strInvert);
    }
    else{
        printf("A string nao eh um palindromo: %s\n", strInvert);
    }

     return 0;
}