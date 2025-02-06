#include <stdio.h>

int main()
{
    int num[10], maior;

    
    for (int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);
        
    }
    maior = num[0];
    
    for(int i = 0; i < 10; i++){
        if(num[i] > maior){
            maior = num[i];
        }
    }
    printf("O maior numero digitado foi: %d\n", maior);
}