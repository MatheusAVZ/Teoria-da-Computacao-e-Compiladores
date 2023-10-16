#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else if (expoente < 0) {
        return 1.0 / potencia(base, -expoente);
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int base, expoente;

    printf("Informe a base (número inteiro): ");
    scanf("%d", &base);

    printf("Informe o expoente (número inteiro): ");
    scanf("%d", &expoente);

    int resultado = potencia(base, expoente);

    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}
