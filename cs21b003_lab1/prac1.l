%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
%}
alpha [a-zA-Z]
digit [0-9]

%%
("0")?("10"|"1")*"111"("01"|"1")*("0")? {printf("%s is valid", yytext);}
.* {printf("%s is invalid", yytext);}

%%
//int main(int argc, char * argv[]){
//    if(argc > 1){
//        FILE *fp = fopen(argv[1], "r");
//        if(fp) yyin = fp;
//    }
//    yylex();
//    return 0;
//}

int main(){
    yylex();
    return 0;
}