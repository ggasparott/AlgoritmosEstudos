#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    int rg;
    int cpf;
    char nome[80];
} Pessoa;

typedef struct Base {
    int armazenado; // Deve sempre corresponder ao número de pessoas na base
    Pessoa pessoas[100];
} Base;

// Função 1: Criar a base
Base cria_base() {
    Base base;
    base.armazenado = 0;  // Inicializa o número de pessoas armazenadas como 0
    return base;
}

// Função 2: Inserir pessoa na base
int insere_base(Pessoa p, Base *base) {
    if (base->armazenado == 100) {
        return 0; // Base cheia
    }

    // Verificar se o RG já existe
    for (int i = 0; i < base->armazenado; i++) {
        if (base->pessoas[i].rg == p.rg) {
            return -1; // RG já existe
        }
    }

    // Inserir a pessoa
    base->pessoas[base->armazenado] = p;
    base->armazenado++;
    return 1; // Inclusão bem-sucedida
}

// Função 3: Remover pessoa da base pelo RG
int remove_base(int rg, Base *base) {
    for (int i = 0; i < base->armazenado; i++) {
        if (base->pessoas[i].rg == rg) {
            // Encontrou a pessoa, move os elementos restantes
            for (int j = i; j < base->armazenado - 1; j++) {
                base->pessoas[j] = base->pessoas[j + 1];
            }
            base->armazenado--;
            return 1; // Remoção bem-sucedida
        }
    }
    return 0; // Pessoa não encontrada
}

// Função para imprimir os dados da base
void imprime_base(Base base) {
    for (int i = 0; i < base.armazenado; i++) {
        printf("Pessoa %d: RG: %d, CPF: %d, Nome: %s\n", i + 1, base.pessoas[i].rg, base.pessoas[i].cpf, base.pessoas[i].nome);
    }
}

int main() {
    Base base = cria_base();

    Pessoa p1 = {12345, 123456789, "Maria Silva"};
    Pessoa p2 = {67890, 987654321, "João Pereira"};

    insere_base(p1, &base);
    insere_base(p2, &base);

    imprime_base(base);

    remove_base(12345, &base);

    printf("\nApós remoção:\n");
    imprime_base(base);

    return 0;
}
