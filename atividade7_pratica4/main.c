#include <stdio.h>

// Função recursiva para calcular o tamanho da string
int calculateStringLength(const char *str, int index) {
    if (str[index] == '\0') {
        return 0;
    }
    return 1 + calculateStringLength(str, index + 1);
}

// Função recursiva para inverter a string
void reverseString(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    FILE *file;
    char filename[] = "textFile.txt"; // Nome do arquivo
    char file_content[1000]; // Array para armazenar o conteúdo do arquivo

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o conteúdo do arquivo
    int length = 0;
    char chr;
    while ((chr = fgetc(file)) != EOF) {
        file_content[length] = chr;
        length++;
    }
    file_content[length] = '\0';

    // Fecha o arquivo original
    fclose(file);

    // Calcula o tamanho da string de forma recursiva
    int str_length = calculateStringLength(file_content, 0);

    // Inverte a string de forma recursiva
    reverseString(file_content, 0, str_length - 1);

    // Abre o arquivo para escrita
    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    // Escreve o tamanho da string no arquivo original
    fprintf(file, "Tamanho da string: %d\n", str_length);

    // Escreve o reverso da string no arquivo original
    fprintf(file, "String reversa: %s\n", file_content);

    // Fecha o arquivo
    fclose(file);

    printf("Tamanho da string: %d\n", str_length);
    printf("String reversa: %s\n", file_content);

    return 0;
}