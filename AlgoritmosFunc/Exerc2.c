#include <stdio.h>

int mdc(int m, int n);  // Protótipo da função

int main() {
    int m, n;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &m, &n);
    
    printf("O MDC de %d e %d é %d\n", m, n, mdc(m, n));
    
    return 0;
}

// Função recursiva para calcular o MDC
int mdc(int m, int n) {
    if (n == 0) {
        return m;  // Caso base
    }
    return mdc(n, m % n);  // Chamada recursiva
}
