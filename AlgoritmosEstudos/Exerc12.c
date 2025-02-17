#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// cifra de cesar 
void cifra_de_cesar(char str[], int n){
    for(int i=0; str[i] != '\0'; i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            str[i] = ((c-'a' + n) % 26) + 'a';
        }
    }

}



int main(){
    char mensagem[100];
    int N;

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite o deslocamento da cifra: ");
    scanf("%d", &N);

    mensagem[strcspn(mensagem, "\n")] = 0;

    cifra_de_cesar(mensagem, N);
    printf("Mensagem criptografada: %s\n", mensagem);

    cifra_de_cesar(mensagem, -N);
    printf("Mensagem descriptografada: %s\n", mensagem);

    return 0;


}