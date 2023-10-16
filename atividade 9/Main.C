#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

// Função para ler uma sequência de números naturais do teclado
int lerSequencia(int sequencia[MAX_N]) {
    int tamanho;
    printf("Informe o tamanho da sequência: ");
    scanf("%d", &tamanho);

    printf("Informe a sequência de números naturais:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &sequencia[i]);
    }

    return tamanho; // Retorna o tamanho da sequência lida
}

// Função para apresentar a sequência na tela
void apresentarSequencia(const int sequencia[], int tamanho) {
    printf("Sequência: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", sequencia[i]);
    }
    printf("\n");
}

// Função para armazenar uma sequência em um arquivo no formato texto
void armazenarSequenciaEmArquivo(const int sequencia[], int tamanho, const char *nomeArquivo) {
    FILE *file = fopen(nomeArquivo, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        fprintf(file, "%d ", sequencia[i]);
    }

    fclose(file);
}

// Função para gerar conjunto a partir de sequência
void gerarConjuntoAPartirDeSequencia(const char *nomeArquivo, int conjunto[], int *tamanho) {
    FILE *file = fopen(nomeArquivo, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    *tamanho = 0;
    while (fscanf(file, "%d", &conjunto[(*tamanho)++]) != EOF) {
        if (*tamanho >= MAX_N) {
            printf("Tamanho máximo excedido.\n");
            break;
        }
    }

    fclose(file);
}

// Função para calcular a união de dois conjuntos
void uniaoDeConjuntos(int conjuntoA[], int tamanhoA, int conjuntoB[], int tamanhoB, int uniao[], int *tamanhoUniao) {
    *tamanhoUniao = 0;

    for (int i = 0; i < tamanhoA; i++) {
        uniao[(*tamanhoUniao)++] = conjuntoA[i];
    }

    for (int i = 0; i < tamanhoB; i++) {
        int pertence = 0;
        for (int j = 0; j < tamanhoA; j++) {
            if (conjuntoB[i] == conjuntoA[j]) {
                pertence = 1;
                break;
            }
        }

        if (!pertence) {
            uniao[(*tamanhoUniao)++] = conjuntoB[i];
        }
    }
}

// Função para calcular a interseção de dois conjuntos
void intersecaoDeConjuntos(int conjuntoA[], int tamanhoA, int conjuntoB[], int tamanhoB, int intersecao[], int *tamanhoIntersecao) {
    *tamanhoIntersecao = 0;

    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                intersecao[(*tamanhoIntersecao)++] = conjuntoA[i];
                break;
            }
        }
    }
}

// Função para calcular a diferença entre dois conjuntos
void diferencaEntreConjuntos(int conjuntoA[], int tamanhoA, int conjuntoB[], int tamanhoB, int diferenca[], int *tamanhoDiferenca) {
    *tamanhoDiferenca = 0;

    for (int i = 0; i < tamanhoA; i++) {
        int pertence = 0;
        for (int j = 0; j < tamanhoB; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                pertence = 1;
                break;
            }
        }

        if (!pertence) {
            diferenca[(*tamanhoDiferenca)++] = conjuntoA[i];
        }
    }
}

// Função para calcular o produto cartesiano entre dois conjuntos
void produtoCartesianoEntreConjuntos(int conjuntoA[], int tamanhoA, int conjuntoB[], int tamanhoB, int produtoCartesiano[], int *tamanhoProdutoCartesiano) {
    *tamanhoProdutoCartesiano = 0;

    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            produtoCartesiano[(*tamanhoProdutoCartesiano)++] = conjuntoA[i] * 1000 + conjuntoB[j]; // Ajuste dependendo do tamanho dos números
        }
    }
}

int main() {
    int sequenciaA[MAX_N];
    int sequenciaB[MAX_N];
    int tamanhoA, tamanhoB;

    printf("Para a sequência A:\n");
    tamanhoA = lerSequencia(sequenciaA);
    apresentarSequencia(sequenciaA, tamanhoA);
    armazenarSequenciaEmArquivo(sequenciaA, tamanhoA, "sequenciaA.txt");

    printf("Para a sequência B:\n");
    tamanhoB = lerSequencia(sequenciaB);
    apresentarSequencia(sequenciaB, tamanhoB);
    armazenarSequenciaEmArquivo(sequenciaB, tamanhoB, "sequenciaB.txt");

    int conjuntoA[MAX_N];
    int tamanhoConjuntoA;
    int conjuntoB[MAX_N];
    int tamanhoConjuntoB;

    gerarConjuntoAPartirDeSequencia("sequenciaA.txt", conjuntoA, &tamanhoConjuntoA);
    gerarConjuntoAPartirDeSequencia("sequenciaB.txt", conjuntoB, &tamanhoConjuntoB);

    // Imprime os conjuntos A e B
    printf("Conjunto A: ");
    for (int i = 0; i < tamanhoConjuntoA; i++) {
        printf("%d ", conjuntoA[i]);
    }
    printf("\n");

    printf("Conjunto B: ");
    for (int i = 0; i < tamanhoConjuntoB; i++) {
        printf("%d ", conjuntoB[i]);
    }
    printf("\n");

    // Calcula a União de A e B
    int uniao[MAX_N * 2];
    int tamanhoUniao;
    uniaoDeConjuntos(conjuntoA, tamanhoConjuntoA, conjuntoB, tamanhoConjuntoB, uniao, &tamanhoUniao);

    printf("União de A e B: ");
    for (int i = 0; i < tamanhoUniao; i++) {
        printf("%d ", uniao[i]);
    }
    printf("\n");

    // Calcula a Interseção de A e B
    int intersecao[MAX_N];
    int tamanhoIntersecao;
    intersecaoDeConjuntos(conjuntoA, tamanhoConjuntoA, conjuntoB, tamanhoConjuntoB, intersecao, &tamanhoIntersecao);

    printf("Interseção de A e B: ");
    for (int i = 0; i < tamanhoIntersecao; i++) {
        printf("%d ", intersecao[i]);
    }
    printf("\n");

    // Calcula a Diferença entre A e B
    int diferencaAB[MAX_N];
    int tamanhoDiferencaAB;
    diferencaEntreConjuntos(conjuntoA, tamanhoConjuntoA, conjuntoB, tamanhoConjuntoB, diferencaAB, &tamanhoDiferencaAB);

    printf("Diferença de A - B: ");
    for (int i = 0; i < tamanhoDiferencaAB; i++) {
        printf("%d ", diferencaAB[i]);
    }
    printf("\n");

    // Calcula a Diferença entre B e A
    int diferencaBA[MAX_N];
    int tamanhoDiferencaBA;
    diferencaEntreConjuntos(conjuntoB, tamanhoConjuntoB, conjuntoA, tamanhoConjuntoA, diferencaBA, &tamanhoDiferencaBA);

    printf("Diferença de B - A: ");
    for (int i = 0; i < tamanhoDiferencaBA; i++) {
        printf("%d ", diferencaBA[i]);
    }
    printf("\n");

    // Calcula o Produto Cartesiano de A x B
    int produtoCartesianoAB[MAX_N * MAX_N];
    int tamanhoProdutoCartesianoAB;
    produtoCartesianoEntreConjuntos(conjuntoA, tamanhoConjuntoA, conjuntoB, tamanhoConjuntoB, produtoCartesianoAB, &tamanhoProdutoCartesianoAB);

    printf("Produto Cartesiano de A x B: ");
    for (int i = 0; i < tamanhoProdutoCartesianoAB; i++) {
        printf("%d ", produtoCartesianoAB[i]);
    }
    printf("\n");

    // Calcula o Produto Cartesiano de B x A
    int produtoCartesianoBA[MAX_N * MAX_N];
    int tamanhoProdutoCartesianoBA;
    produtoCartesianoEntreConjuntos(conjuntoB, tamanhoConjuntoB, conjuntoA, tamanhoConjuntoA, produtoCartesianoBA, &tamanhoProdutoCartesianoBA);

    printf("Produto Cartesiano de B x A: ");
    for (int i = 0; i < tamanhoProdutoCartesianoBA; i++) {
        printf("%d ", produtoCartesianoBA[i]);
    }
    printf("\n");

    return 0;
}
