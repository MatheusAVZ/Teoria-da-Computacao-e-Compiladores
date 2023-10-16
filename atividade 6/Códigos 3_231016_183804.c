#include <stdio.h>

int isalpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char testChar;
    printf("Digite um caractere para verificar se é uma letra: ");
    scanf("%c", &testChar);

    if (isalpha(testChar)) {
        printf("O caractere '%c' é uma letra.\n", testChar);
    } else {
        printf("O caractere '%c' não é uma letra.\n", testChar);
    }

    return 0;
}

Neste exemplo, a função isalpha verifica se um caractere é uma letra do alfabeto, retornando 1 se for e 0 se não for. O programa principal solicita ao usuário que insira um caractere e, em seguida, usa a função isalpha para verificar se é uma letra ou não.

#include <stdio.h>

int isdigit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char testChar;
    printf("Digite um caractere para verificar se é um dígito: ");
    scanf("%c", &testChar);

    if (isdigit(testChar)) {
        printf("O caractere '%c' é um dígito.\n", testChar);
    } else {
        printf("O caractere '%c' não é um dígito.\n", testChar);
    }

    return 0;
}

Neste exemplo, a função isdigit verifica se um caractere é um dígito, retornando 1 se for e 0 se não for. O programa principal solicita ao usuário que insira um caractere e, em seguida, usa a função isdigit para verificar se é um dígito ou não.

#include <stdio.h>
#include <ctype.h>

int main() {
    char testChar;
    printf("Digite um caractere para verificar se é uma letra: ");
    scanf(" %c", &testChar);

    if (isalpha(testChar)) {
        printf("O caractere '%c' é uma letra.\n", testChar);
    } else {
        printf("O caractere '%c' não é uma letra.\n", testChar);
    }

    return 0;
}

Neste exemplo, a função isalpha da biblioteca padrão ctype.h é usada para verificar se um caractere é uma letra do alfabeto. O programa solicita ao usuário que insira um caractere e, em seguida, usa a função isalpha para verificar se é uma letra ou não.

#include <stdio.h>
#include <ctype.h>

int main() {
    char testChar;
    printf("Digite um caractere para verificar se é uma letra minúscula: ");
    scanf(" %c", &testChar);

    if (islower(testChar)) {
        printf("O caractere '%c' é uma letra minúscula.\n", testChar);
    } else {
        printf("O caractere '%c' não é uma letra minúscula.\n", testChar);
    }

    return 0;
}

Neste exemplo, a função islower da biblioteca padrão ctype.h é usada para verificar se um caractere é uma letra minúscula. O programa solicita ao usuário que insira um caractere e, em seguida, usa a função islower para verificar se é uma letra minúscula ou não.

#include <stdio.h>

int isnum(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char testChar;
    printf("Digite um caractere para verificar se é um número: ");
    scanf(" %c", &testChar);

    if (isnum(testChar)) {
        printf("O caractere '%c' é um número.\n", testChar);
    } else {
        printf("O caractere '%c' não é um número.\n", testChar);
    }

    return 0;
}

Neste exemplo, a função isnum verifica se um caractere é um número. O programa solicita ao usuário que insira um caractere e, em seguida, usa a função isnum para verificar se é um número ou não.