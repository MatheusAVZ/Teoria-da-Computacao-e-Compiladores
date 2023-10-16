#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Veículo
struct Veiculo {
    int numeroChassi;
    char marca[100];
    char modelo[100];
    double preco;
};

// Função para alocar memória para um vetor de estruturas Veículo
struct Veiculo *alocarMemoria(int tamanho) {
    struct Veiculo *ponteiro = (struct Veiculo *)malloc(tamanho * sizeof(struct Veiculo));
    if (ponteiro == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return ponteiro;
}

// Função para preencher o vetor de estruturas Veículo com dados do usuário
void preencherVetor(struct Veiculo *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Preencha os dados do Veículo %d:\n", i + 1);
        printf("Número do Chassi: ");
        scanf("%d", &vetor[i].numeroChassi);
        printf("Marca: ");
        scanf("%s", vetor[i].marca);
        printf("Modelo: ");
        scanf("%s", vetor[i].modelo);
        printf("Preço: ");
        scanf("%lf", &vetor[i].preco);
    }
}

// Função para imprimir o vetor de estruturas Veículo
void imprimirVetor(struct Veiculo *vetor, int tamanho) {
    printf("Vetor de Veículos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Número do Chassi: %d, Marca: %s, Modelo: %s, Preço: %.2f\n",
               vetor[i].numeroChassi, vetor[i].marca, vetor[i].modelo, vetor[i].preco);
    }
}

int main() {
    struct Veiculo *array;
    int tamanho, novoTamanho;

    printf("Digite o tamanho inicial do vetor de Veículos: ");
    scanf("%d", &tamanho);

    // Aloca memória usando a função alocarMemoria
    array = alocarMemoria(tamanho);

    // Preenche o vetor com os dados do usuário usando a função preencherVetor
    preencherVetor(array, tamanho);

    // Imprime o vetor antes da realocação
    printf("Vetor de Veículos (antes da realocação):\n");
    imprimirVetor(array, tamanho);

    // Solicita o novo tamanho do vetor após a realocação
    printf("Digite o novo tamanho do vetor: ");
    scanf("%d", &novoTamanho);

    // Realoca o vetor para um tamanho maior
    array = (struct Veiculo *)realloc(array, novoTamanho * sizeof(struct Veiculo));
    if (array == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1;
    }

    // Preenche os elementos adicionais
    if (novoTamanho > tamanho) {
        preencherVetor(array + tamanho, novoTamanho - tamanho);
    }

    // Imprime o vetor após a realocação
    printf("Vetor de Veículos (após a realocação):\n");
    imprimirVetor(array, novoTamanho);

    // Libera a memória alocada
    free(array);

    return 0;
}
