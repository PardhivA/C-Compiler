%option noyywrap

%{



char ch[50];
int count = 0;
int ch_index = 0;
int F(), T(), Tprime(), Eprime(), E();
char given[50];
int sno = 1;
%}


NUMBER [0-9]+
IDENTIFIER [A-Za-z_][0-9A-Za-z_]*
MUL "*"
ADD "+"
LBRAC "("
RBRAC ")"


%%

{NUMBER}|{IDENTIFIER} {
    strcat(ch, "i");
    strcat(given, yytext);
    count++;
}

{MUL} {strcat(ch,"*"); strcat(given, yytext);count++;}
{ADD} {strcat(ch, "+"); strcat(given, yytext);count++;}
{LBRAC} {strcat(ch,"("); strcat(given, yytext);count++;}
{RBRAC} {strcat(ch, ")");strcat(given, yytext); count++;}
"\n" {
    printf("input %d. \n", sno );
    sno++;
    printf("given string: %s \n", given);
    printf("tokenized string: %s \n", ch);
    if(E() && ch_index == count){
        printf("Output:  yes \n \n -------------------------------------------------- \n");
    }
    else {
        printf("Output:  No \n \n --------------------------------------------------- \n");
    }
    ch_index = 0;
    count = 0;
  memset(ch, '\0', sizeof(ch));    
  memset(given, '\0', sizeof(given));    

}
%%

int Tprime(){
    if(ch[ch_index] == '*'){
        ch_index++;
        if(F()){
            if(Tprime()){
                return 1;
            }
        }

    }
    else{
        return 1;
    }


}




int Eprime(){
    if(ch[ch_index] == '+'){
        ch_index++;
        if(T()){
            if(Eprime()){
                return 1;
            }
        }
    }
    else {
        return 1;
    }
}

int E(){
    if(T()){
        if(Eprime()){
            return 1;
        }
        else return 0;
    }
    else return 0;
}

int F(){
    if(ch[ch_index] == 'i'){
        ch_index++;
        return 1;
    }
    else if(ch[ch_index]=='('){
        ch_index++;
        if(E()){
            if(ch[ch_index] == ')'){
                ch_index++;
                return 1;
            }
            else return 0;
        }
        else return 0;
    }
    else return 0;
}

int T(){
    if(F()){
        if(Tprime()){
            return 1;
        }
    }
    return 0;
}












int main(int argc, char* argv[]){
    
     if(argc > 1){
    FILE *file = fopen(argv[1],"r");
    if(file){
    yyin = file;
    }
    }
    yylex();
    

    return 0;
}

