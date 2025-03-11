#include <stdlib.h>
#include <stdio.h>

int numFriends(int a, int b);


int main(){
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (numFriends(a, b)){
        printf("Os numeros %d e %d sao amigos\n", a, b);
    } else {
        printf("Os numeros %d e %d nao sao amigos\n", a, b);
    }
    return 0;

}

int numFriends(int a, int b){
    int sumA = 0;
    int sumB = 0;
    for (int i = 1; i < a; i++){
        if (a % i == 0){
            sumA += i;
        }
    }
    for (int i = 1; i < b; i++){
        if (b % i == 0){
            sumB += i;
        }
    }
    if (sumA == b && sumB == a){
        return 1;
    }
    return 0;
}