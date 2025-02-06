#include <stdio.h>
#include <stdlib.h>

int main (){
    char string[100];
    int contCaracteres = 0;
    
    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    for (int i=0; i < 100; i++){
        if (string[i] == '\0' || string[i] == '\n'){
            break;
        }
        if(string[i] != ' '){
            contCaracteres++;
        }
        
        
    }
    printf("A string tem %d caracteres\n", contCaracteres);





    return 0; 
}