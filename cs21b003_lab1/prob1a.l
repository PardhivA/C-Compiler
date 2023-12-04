%option noyywrap

%{

%}


%%

(0?(1|10)*111(0?)(1|10)*)\n printf("Valid %s", yytext);
(0|1)*\n printf("Invalid %s", yytext);

%%

int main(){
    yylex();
     if(argc > 1){
    FILE *file = fopen(argv[1],"r");
    if(file){
    yyin = file;
    }   
    }
    return 0;
}
