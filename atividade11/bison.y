%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern char yytext;
extern FILEyyin;
void yyerror(const char s);
%}

%union {
    int num;
    charstr;
}

%token PRINT ARITH_OP NUMBER STRING

%type <str> text
%type <num> number

%%

commands:
    /* empty */
    | commands command

command:
    PRINT text    { printf("Comando PRINT: %s\n", $2); }
    | ARITH_OP number number { printf("Comando %s: %d e %d\n", $1, $2, $3); }
    ;

text:
    STRING { $$ = $1; }
    ;

number:
    NUMBER { $$ = $1; }
    ;

%%

void yyerror(const chars) {
    fprintf(stderr, "Erro: %s\n", s);
    exit(EXIT_FAILURE);
}

int main() {
    yyin = fopen("input.txt", "r");
    if (!yyin) {
        fprintf(stderr, "Erro ao abrir o arquivo de entrada.\n");
        return EXIT_FAILURE;
    }

    yyparse();

    fclose(yyin);

    return 0;
}