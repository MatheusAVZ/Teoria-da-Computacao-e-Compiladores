#include <stdio.h>

void salvarSequenciasEmArquivo(int *sequencia1, int *sequencia2, int tamanho) {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.");
        return;
    }

    fprintf(arquivo, "Primeira sequencia:\n");
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%d ", sequencia1[i]);
    }

    fprintf(arquivo, "\n\nSegunda sequencia:\n");
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%d ", sequencia2[i]);
    }

    fclose(arquivo);
}

int main() {
    int tamanho = 5;
    int sequencia1[5];
    int sequencia2[5];

#include <stdio.h>

#define MAX_SIZE 100

void lerSequenciasDeArquivo(int *sequencia1, int *sequencia2, int *tamanho) {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int num;
    char linha[100];
    fgets(linha, sizeof(linha), arquivo); // Ignora a primeira linha "Primeira sequencia:"
    int i = 0;
    while (fscanf(arquivo, "%d", &num) == 1) {
        sequencia1[i] = num;
        i++;
    }

    *tamanho = i; // Atualiza o tamanho da sequência

    fgets(linha, sizeof(linha), arquivo); // Ignora a linha em branco e a linha "Segunda sequencia:"
    i = 0;
    while (fscanf(arquivo, "%d", &num) == 1) {
        sequencia2[i] = num;
        i++;
    }

    fclose(arquivo);
}

int main() {
    int tamanho;
    int sequencia1[MAX_SIZE];
    int sequencia2[MAX_SIZE];

    lerSequenciasDe

#include <stdio.h>

#define MAX_SIZE 100

void gerarConjuntos(int *sequencia1, int *sequencia2, int tamanho, int *conjuntoA, int *conjuntoB, int *tamanhoA, int *tamanhoB) {
    int i, j;
    *tamanhoA = 0;
    *tamanhoB = 0;

    for (i = 0; i < tamanho; i++) {
        int estaEmA = 0;
        for (j = 0; j < *tamanhoA; j++) {
            if (sequencia1[i] == conjuntoA[j]) {
                estaEmA = 1;
                break;
            }
        }
        if (!estaEmA) {
            conjuntoA[*tamanhoA] = sequencia1[i];
            (*tamanhoA)++;
        }
    }

    for (i = 0; i < tamanho; i++) {
        int estaEmB = 0;
        for (j = 0; j < *tamanhoB; j++) {
            if (sequencia2[i] == conjuntoB[j]) {
                estaEmB = 1;
                break;
            }
        }
        if (!estaEmB) {
            conjuntoB[*tamanhoB] = sequencia2[i];
            (*tamanhoB)++;
        }
    }
}

void salvarConjuntosEmArquivo(int *conjuntoA, int *conjuntoB, int tamanhoA, int tamanhoB) {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "\nConjunto A:\n");
    for (int i = 0; i < tamanhoA; i++) {
        fprintf(arquivo, "%d ", conjuntoA[i]);
    }

    fprintf(arquivo, "\nConjunto B:\n");
    for (int i = 0; i < tamanhoB; i++) {
        fprintf(arquivo, "%d ", conjuntoB[i]);
    }

    fclose(arquivo);
}

int main() {
    int tamanho;
    int sequencia1[MAX_SIZE];
    int sequencia2[MAX_SIZE];

    lerSequenciasDeArquivo(sequencia1, sequencia2, &tamanho);

    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];
    int tamanhoA, tamanhoB;

    gerarConjuntos(sequencia1, sequencia2, tamanho, conjuntoA, conjuntoB, &tamanhoA, &tamanhoB);

    printf("Conjunto A:\n");
    for (int i = 0; i < tamanhoA; i++) {
        printf("%d ", conjuntoA[i]);
    }
    printf("\n");

    printf("Conjunto B:\n");
    for (int i = 0; i < tamanhoB; i++) {
        printf("%d ", conjuntoB[i]);
    }
    printf("\n");

    salvarConjuntosEmArquivo(conjuntoA, conjuntoB, tamanhoA, tamanhoB);

    return 0;
}

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void salvarConjuntoPotenciaEmArquivo(int *conjunto, int tamanho, FILE *arquivo) {
    int i, j, potencia;
    fprintf(arquivo, "\nConjunto Potencia:\n");
    for (i = 0; i < pow(2, tamanho); i++) {
        fprintf(arquivo, "{ ");
        for (j = 0; j < tamanho; j++) {
            if (i & (1 << j)) {
                fprintf(arquivo, "%d ", conjunto[j]);
            }
        }
        fprintf(arquivo, "}\n");
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarConjuntoPotenciaEmArquivo(conjuntoA, tamanhoA, arquivo);
    salvarConjuntoPotenciaEmArquivo(conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void salvarConjuntoProprioEmArquivo(int *conjunto, int tamanho, FILE *arquivo) {
    int i, j, potencia;
    fprintf(arquivo, "\nConjunto Proprio:\n");
    for (i = 1; i < pow(2, tamanho); i++) {
        fprintf(arquivo, "{ ");
        for (j = 0; j < tamanho; j++) {
            if (i & (1 << j)) {
                fprintf(arquivo, "%d ", conjunto[j]);
            }
        }
        fprintf(arquivo, "}\n");
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarConjuntoProprioEmArquivo(conjuntoA, tamanhoA, arquivo);
    salvarConjuntoProprioEmArquivo(conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

void salvarUniaoEmArquivo(int *conjuntoA, int tamanhoA, int *conjuntoB, int tamanhoB, FILE *arquivo) {
    int i, j, pertence;
    fprintf(arquivo, "\nUniao dos Conjuntos A e B:\n");
    for (i = 0; i < tamanhoA; i++) {
        fprintf(arquivo, "%d ", conjuntoA[i]);
    }
    for (i = 0; i < tamanhoB; i++) {
        pertence = 0;
        for (j = 0; j < tamanhoA; j++) {
            if (conjuntoB[i] == conjuntoA[j]) {
                pertence = 1;
                break;
            }
        }
        if (!pertence) {
            fprintf(arquivo, "%d ", conjuntoB[i]);
        }
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarUniaoEmArquivo(conjuntoA, tamanhoA, conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

void salvarIntersecaoEmArquivo(int *conjuntoA, int tamanhoA, int *conjuntoB, int tamanhoB, FILE *arquivo) {
    int i, j, pertence;
    fprintf(arquivo, "\nIntersecao dos Conjuntos A e B:\n");
    for (i = 0; i < tamanhoA; i++) {
        for (j = 0; j < tamanhoB; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                fprintf(arquivo, "%d ", conjuntoA[i]);
                break;
            }
        }
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarIntersecaoEmArquivo(conjuntoA, tamanhoA, conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

void salvarDiferencaEmArquivo(int *conjuntoA, int tamanhoA, int *conjuntoB, int tamanhoB, FILE *arquivo) {
    int i, j, pertence;
    fprintf(arquivo, "\nDiferenca de A e B:\n");
    for (i = 0; i < tamanhoA; i++) {
        pertence = 0;
        for (j = 0; j < tamanhoB; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                pertence = 1;
                break;
            }
        }
        if (!pertence) {
            fprintf(arquivo, "%d ", conjuntoA[i]);
        }
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarDiferencaEmArquivo(conjuntoA, tamanhoA, conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

void salvarDiferencaBmenosAEmArquivo(int *conjuntoA, int tamanhoA, int *conjuntoB, int tamanhoB, FILE *arquivo) {
    int i, j, pertence;
    fprintf(arquivo, "\nDiferenca de B e A:\n");
    for (i = 0; i < tamanhoB; i++) {
        pertence = 0;
        for (j = 0; j < tamanhoA; j++) {
            if (conjuntoB[i] == conjuntoA[j]) {
                pertence = 1;
                break;
            }
        }
        if (!pertence) {
            fprintf(arquivo, "%d ", conjuntoB[i]);
        }
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarDiferencaBmenosAEmArquivo(conjuntoA, tamanhoA, conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

void salvarProdutoCartesianoEmArquivo(int *conjuntoA, int tamanhoA, int *conjuntoB, int tamanhoB, FILE *arquivo) {
    int i, j;
    fprintf(arquivo, "\nProduto Cartesiano de A e B:\n");
    for (i = 0; i < tamanhoA; i++) {
        for (j = 0; j < tamanhoB; j++) {
            fprintf(arquivo, "(%d, %d) ", conjuntoA[i], conjuntoB[j]);
        }
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarProdutoCartesianoEmArquivo(conjuntoA, tamanhoA, conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

void salvarProdutoCartesianoBxAEmArquivo(int *conjuntoA, int tamanhoA, int *conjuntoB, int tamanhoB, FILE *arquivo) {
    int i, j;
    fprintf(arquivo, "\nProduto Cartesiano de B e A:\n");
    for (i = 0; i < tamanhoB; i++) {
        for (j = 0; j < tamanhoA; j++) {
            fprintf(arquivo, "(%d, %d) ", conjuntoB[i], conjuntoA[j]);
        }
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("sequencias.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanhoA, tamanhoB;
    int conjuntoA[MAX_SIZE];
    int conjuntoB[MAX_SIZE];

    // ... Preencha conjuntoA e conjuntoB e defina seus tamanhos ...

    salvarProdutoCartesianoBxAEmArquivo(conjuntoA, tamanhoA, conjuntoB, tamanhoB, arquivo);

    fclose(arquivo);
    return 0;
}