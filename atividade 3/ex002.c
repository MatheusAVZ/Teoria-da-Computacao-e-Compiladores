#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Pessoa
struct Pessoa {
    long long CPF;
    char nome[100];
    double salario;
};

// Função para alocar memória para um vetor de estruturas Pessoa
struct Pessoa *alocarMemoria(int tamanho) {
    struct Pessoa *ponteiro = (struct Pessoa *)calloc(tamanho, sizeof(struct Pessoa));
    if (ponteiro == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return ponteiro;
}

// Função para preencher o vetor de estruturas Pessoa com dados do usuário
void preencherVetor(struct Pessoa *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Preencha os dados da Pessoa %d:\n", i + 1);
        printf("CPF: ");
        scanf("%lld", &vetor[i].CPF);
        printf("Nome: ");
        scanf("%s", vetor[i].nome);
        printf("Salário: ");
        scanf("%lf", &vetor[i].salario);
    }
}

// Função para imprimir o vetor de estruturas Pessoa
void imprimirVetor(struct Pessoa *vetor, int tamanho) {
    printf("Vetor de Pessoas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("CPF: %lld, Nome: %s, Salário: %.2f\n", vetor[i].CPF, vetor[i].nome, vetor[i].salario);
    }
}

int main() {
    struct Pessoa *array;
    int n;

    printf("Digite o tamanho do vetor de Pessoas: ");
    scanf("%d", &n);

    // Aloca memória usando a função alocarMemoria
    array = alocarMemoria(n);

    // Preenche o vetor com os dados do usuário usando a função preencherVetor
    preencherVetor(array, n);

    // Imprime o vetor
    imprimirVetor(array, n);

    // Libera a memória alocada com calloc
    free(array);

    return 0;
}
