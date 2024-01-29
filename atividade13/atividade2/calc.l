%{
#include "parser.tab.h"  // Include the Bison-generated header file
%}

%%

"print"       { return PRINT; }   // Return PRINT token when "print" is encountered
[ \t\n]       ;                   // Ignore whitespace and newlines
.             { return yytext[0]; } // Return other characters as they are

%%

int yywrap() {
    return 1; // Indicate end of input
}
