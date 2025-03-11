#include <stdlib.h>
#include <stdio.h>

// trocando valores de uma variavel utilizando ponteiros
int main(){
    int a = 10, b = 20;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    printf("a = %d, b = %d\n", a, b);
    printf("p1 = %d, p2 = %d\n", *p1, *p2);

    *p1 = b;
    *p2 = a;

    printf("a = %d, b = %d\n", a, b);
    printf("p1 = %d, p2 = %d\n", *p1, *p2);

    return 0;

}