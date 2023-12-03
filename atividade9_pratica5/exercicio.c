#include <stdio.h>
#include <stdlib.h>

// 1) Crie um AFD para reconhecer a linguagem representada pela
void automato1() {
  int a, erro;
  while (1) {
    char estado = '0';
    char estadoAnt = '0';
    erro = 0;
    printf("\nEntre com os dados:");
    while ((a = getchar()) != '\n') {
      if (estado == '0' && a == '0') {
        estado = '0';
      } else if (estado == '0' && a == '1') {
        estado = '1';
      } else if (estado == '1' && a == '1') {
        estado = '2';
      } else if (estado == '1' && a == '0') {
        estado = '3';
      } else if (estado == '2' && a == '0') {
        estado = '2';
      } else if (estado == '2' && a == '1') {
        estado = '3';
      } else if (estado == '3' && (a == '0' || a == '1')) {
        estado = '3';
      } else {
        // Dados informados inválidos
        erro = 1;
      }
    }

    if (erro == 0) {
      printf("\nTransicao de estado de q%c -> q%c", estadoAnt, estado);
    } else {
      printf("\nEstado de erro.");
    }
    printf("\n\nTecle <ENTER> para continuar.");
    getchar();
    system("clear || cls");

    estadoAnt = estado;
  }
}

// 2) Para o alfabeto {a, b}, crie um AFD que reconhece todas as palavras que não possuem dois a’s consecutivos.
void automato2() {
  int a, erro;
  while (1) {
  char estado = '0';
  char estadoAnt = '0';
    erro = 0;
    printf("\nEntre com os dados:");
    while ((a = getchar()) != '\n') {
      if (estado == '0' && a == 'a') {
        estado = '1';
      } else if (estado == '0' && a == 'b') {
        estado = '3';
      } else if (estado == '1' && a == 'a') {
        estado = '5';
      } else if (estado == '1' && a == 'b') {
        estado = '2';
      } else if (estado == '2' && a == 'a') {
        estado = '1';
      } else if (estado == '2' && a == 'b') {
        estado = '2';
      } else if (estado == '3' && a == 'a') {
        estado = '4';
      } else if (estado == '3' && a == 'b') {
        estado = '3';
      } else if (estado == '4' && a == 'a') {
        estado = '5';
      } else if (estado == '4' && a == 'b') {
        estado = '3';
      } else if (estado == '5' && (a == 'a' || a == 'b')) {
        estado = '5';
      }
      else {
        // Dados informados inválidos
        erro = 1;
      }
    }

    if (erro == 0) {
      printf("\nTransicao de estado de q%c -> q%c", estadoAnt, estado);
    } else {
      printf("\nEstado de erro.");
    }
    printf("\n\nTecle <ENTER> para continuar.");
    getchar();
    system("clear || cls");

    estadoAnt = estado;
  }
}

// 3) Crie um AFD que reconhece todas as palavras que tenham um número par de 0’s, sabendo que o alfabeto desta linguagem é {0,1}
void automato3() {
  int a, erro;
  while (1) {
    char estado = '0';
    char estadoAnt = '0';
    erro = 0;
    printf("\nEntre com os dados:");
    while ((a = getchar()) != '\n') {
      if (estado == '0' && a == '0') {
        estado = '1';
      } else if (estado == '0' && a == '1') {
        estado = '0';
      } else if (estado == '1' && a == '0') {
        estado = '2';
      } else if (estado == '1' && a == '1') {
        estado = '1';
      } else if (estado == '2' && a == '0') {
        estado = '1';
      } else if (estado == '2' && a == '1') {
        estado = '2';
      } else {
        // Dados informados inválidos
        erro = 1;
      }
    }

    if (erro == 0) {
      printf("\nTransicao de estado de q%c -> q%c", estadoAnt, estado);
    } else {
      printf("\nEstado de erro.");
    }
    printf("\n\nTecle <ENTER> para continuar.");
    getchar();
    system("clear || cls");

    estadoAnt = estado;
  }
}

/**
 *     4) Dada a expressão regular, crie o grafo que representa o AFD:
 *     L(E) = a(a + b)* ∪ ba(a + b)* ∪ bba(a + b)*
 *     Dica: tente ver a expressão regular como se fosse três partes distintas, assim conseguirá
 *     identificar os elementos em comum.
 */
void automato4() {
  int a, erro;
  while (1) {
    char estado = '0';
    char estadoAnt = '0';
    erro = 0;
    printf("\nEntre com os dados:");
    while ((a = getchar()) != '\n') {
      if (estado == '0' && a == 'a') {
        estado = '1';
      } else if (estado == '0' && a == 'b') {
        estado = '3';
      } else if (estado == '3' && a == 'a') {
        estado = '1';
      } else if (estado == '3' && a == 'b') {
        estado = '2';
      } else if (estado == '2' && a == 'a') {
        estado = '1';
      } else if (estado == '2' && a == 'b') {
        // ??? O grafo do gabarito não é uma função total?
        estado = '1';
      } else if (estado == '1' && (a == 'a' || a == 'b')) {
        estado = '1';
      } else {
        // Dados informados inválidos
        erro = 1;
      }
    }

    if (erro == 0) {
      printf("\nTransicao de estado de q%c -> q%c", estadoAnt, estado);
    } else {
      printf("\nEstado de erro.");
    }
    printf("\n\nTecle <ENTER> para continuar.");
    getchar();
    system("clear || cls");

    estadoAnt = estado;
  }
}

/**
 *     5) Crie um AFD que reconheça a linguagem L = {w | w tem um número
 *     par de 0’s e 1’s}, sabendo que o alfabeto Σ = {0, 1} e que o AFD
 *     aceitará uma palavra vazia.
 */
void automato5() {
  int a, erro;
  while (1) {
    char estado = '0';
    char estadoAnt = '0';
    erro = 0;
    printf("\nEntre com os dados:");
    while ((a = getchar()) != '\n') {
      if (estado == '0' && a == '0') {
        estado = '1';
      } else if (estado == '0' && a == '1') {
        estado = '2';
      } else if (estado == '1' && a == '1') {
        estado = '3';
      } else if (estado == '1' && a == '0') {
        estado = '0';
      } else if (estado == '2' && a == '1') {
        estado = '0';
      } else if (estado == '2' && a == '0') {
        estado = '3';
      } else {
        // Dados informados inválidos
        erro = 1;
      }
    }

    if (erro == 0) {
      printf("\nTransicao de estado de q%c -> q%c", estadoAnt, estado);
    } else {
      printf("\nEstado de erro.");
    }
    printf("\n\nTecle <ENTER> para continuar.");
    getchar();
    system("clear || cls");

    estadoAnt = estado;
  }
}


int main() {
   automato1();
  // automato2();
  // automato3();
  // automato4();
 // automato5();
}
