%{
#include <stdio.h>
#include "y.tab.h"
%}

%%
"PRINT"                 { return PRINT; }
"ADD"|"SUB"             { return ARITH_OP; }
[0-9]+                  { yylval.num = atoi(yytext); return NUMBER; }
"[^"]*"              { yylval.str = strdup(yytext + 1);
                          yylval.str[strlen(yylval.str) - 1] = '\0';
                          return STRING; }
[ \t\n]                 ; // Ignorar espaços em branco e tabulações
.                       { return yytext[0]; }
%%

int yywrap() {
    return 1;
}