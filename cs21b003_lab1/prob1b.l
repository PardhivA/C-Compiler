%option noyywrap

%{
#include <stdbool.h>
    int countx = 0, county = 0;
	bool status = true;
%}



%% 

(x) {countx++;}  // tracks number of "x"s
(y) {county++;} // tracks number of "y"s
z {}
\n {
if(!status) printf("Invalid expression %s", yytext); 
else if(countx%2 == county%3) printf("valid expression %s", yytext);   // checks if modulo x,2 = module y,3
else printf("Invalid expression %s", yytext);
countx = 0;
county = 0;
status = true;
}
[^xyz]+ {status = false;}



%%

int main(int argc, char* argv[]){
    yylex();
    if(argc > 1){
    FILE *file = fopen(argv[1],"r");
    if(file){
    yyin = file;
    }
    }
    return 0;
}


