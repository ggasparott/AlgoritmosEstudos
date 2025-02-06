#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = '_';
    }

 }
    printf("String original: %s\n", str);
    printf("String modificada: %s\n", str);
}   