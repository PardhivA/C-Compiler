%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
%}

alpha [a-zA-Z]
digit [0-9]
%%
("0")?("10"|"1"|)*"111"("01"|"1"|)*("0")? {printf("%s is valid", yytext);}
.* {printf("%s is invalid", yytext);}

%%
int main(){
    yylex();
    return 0;
}