typedef struct complexo Complexo;

Complexo* criaComplexo(float real, float imag);

void liberaComplexo(Complexo* c);

Complexo* somaComplexo(Complexo* c1, Complexo* c2);

Complexo* subtraiComplexo(Complexo* c1, Complexo* c2);

Complexo* multiplicaComplexo(Complexo* c1, Complexo* c2);

Complexo* divideComplexo(Complexo* c1, Complexo* c2);

void imprimeComplexo(Complexo* c);



double getReal(Complexo* c);
double getImag(Complexo* c);