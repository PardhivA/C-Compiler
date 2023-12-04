%option noyywrap

%{


%}

ALPHA [abcd]

%%


({ALPHA}+az{ALPHA}+a)|({ALPHA}+bz{ALPHA}+b)|({ALPHA}+cz{ALPHA}+c)|({ALPHA}+dz{ALPHA}+d)  {printf("Valid String %s \n", yytext);} // checks each possible case of y = a,b,c,d.
([a-z])+ {printf("Invalid String %s \n", yytext);} // 




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
