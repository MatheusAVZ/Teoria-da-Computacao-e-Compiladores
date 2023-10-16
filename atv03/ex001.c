#include <stdio.h>
#include <stdlib.h>

int *alocarMemoria(int tamanho) {
    int *ponteiro = (int *)malloc(tamanho * sizeof(int));
    if (ponteiro == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1); // Sai do programa em caso de falha na alocação
    }
    return ponteiro;
}

void preencherVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 10;
    }
}

void imprimirVetor(int *vetor, int tamanho) {
    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {
    int *array, n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    // Aloca memória usando a função alocarMemoria
    array = alocarMemoria(n);

    preencherVetor(array, n);

    imprimirVetor(array, n);

    free(array);

    return 0;
}
