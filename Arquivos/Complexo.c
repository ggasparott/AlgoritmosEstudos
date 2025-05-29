#include <stdio.h>
#include <stdlib.h>
#include "Complexo.h"

struct complexo {
    float real;
    float imag;
};


Complexo* criaComplexo(float real, float imag) {
    Complexo* c = (Complexo*) malloc(sizeof(Complexo*));
    if(c != NULL) {
        c->real = real;
        c->imag = imag;
    }
    return c;
}

void liberaComplexo(Complexo* c) {
    free(c);
}

Complexo* somaComplexo(Complexo* c1, Complexo* c2) {
    return criaComplexo(c1->real + c2->real, c1->imag + c2->imag);

}

Complexo* subtraiComplexo(Complexo* c1, Complexo* c2) {
    return criaComplexo(c1->real - c2->real, c1->imag - c2->imag);
}

Complexo* multiplicaComplexo(Complexo* c1, Complexo* c2) {
    float real = c1->real * c2->real - c1->imag * c2->imag;
    float imag = c1->real * c2->imag + c1->imag * c2->real;
    return criaComplexo(real, imag);
}

Complexo* divideComplexo(Complexo* c1, Complexo* c2) {
    float denom = c2->real * c2->real + c2->imag * c2->imag;
    if (denom == 0) return NULL;
    float real = (c1->real * c2->real + c1->imag * c2->imag) / denom;
    float imag = (c1->imag * c2->real - c1->real * c2->imag) / denom;
    return criaComplexo(real, imag);    
}

double getReal(Complexo* c) {
    return c->real;
}

double getImag(Complexo* c) {
    return c->imag;
}
void imprimeComplexo(Complexo* c) {
    double real = getReal(c);
    double imag = getImag(c);

    if (imag < 0)
        printf("Resultado: %.2lf - %.2lfi\n", real, -imag);
    else
        printf("Resultado: %.2lf + %.2lfi\n", real, imag);
}
