#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media aritmetica e: %f\n", media);

    return 0;
}

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade_atual, idade_2050;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade_atual = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento;

    printf("A idade atual e: %d\n", idade_atual);
    printf("A idade em 2050 sera: %d\n", idade_2050);

    return 0;
}

#include <stdio.h>

int main() {
    float cotacao_dolar, valor_dolares, valor_reais;

    printf("Digite a cotacao do dolar em reais: ");
    scanf("%f", &cotacao_dolar);

    printf("Digite o valor em dolares: ");
    scanf("%f", &valor_dolares);

    valor_reais = cotacao_dolar * valor_dolares;

    printf("O valor em reais e: %f\n", valor_reais);

    return 0;
}

#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    novo_salario = salario * 1.25; // Aumento de 25% = 1 + 25/100 = 1.25

    printf("O novo salario e: %f\n", novo_salario);

    return 0;
}

#include <stdio.h>

int main() {
    float diagonal_maior, diagonal_menor, area;

    printf("Digite a diagonal maior do losango: ");
    scanf("%f", &diagonal_maior);

    printf("Digite a diagonal menor do losango: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("A area do losango e: %f\n", area);

    return 0;
}

#include <stdio.h>

int main() {
    float temperatura_celsius, temperatura_fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);

    temperatura_fahrenheit = (temperatura_celsius * 1.8) + 32;

    printf("A temperatura em Fahrenheit e: %f\n", temperatura_fahrenheit);

    return 0;
}

#include <stdio.h>

int main() {
    float salario_minimo, salario_funcionario, quantidade_salarios_minimos;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);

    quantidade_salarios_minimos = salario_funcionario / salario_minimo;

    printf("O funcionario recebe %.2f salarios minimos\n", quantidade_salarios_minimos);

    return 0;
}

#include <stdio.h>

int main() {
    float peso, novo_peso_engordar, novo_peso_emagrecer;

    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    novo_peso_engordar = peso * 1.15; // Aumento de 15% = 1 + 15/100 = 1.15
    novo_peso_emagrecer = peso * 0.8; // Redução de 20% = 1 - 20/100 = 0.8

    printf("Se a pessoa engordar 15%%, o novo peso sera: %.2f\n", novo_peso_engordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso sera: %.2f\n", novo_peso_emagrecer);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("O valor da hipotenusa e: %f\n", hipotenusa);

    return 0;
}

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float raio, comprimento, area

#include <stdio.h>

int main() {
    int numero, i;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}