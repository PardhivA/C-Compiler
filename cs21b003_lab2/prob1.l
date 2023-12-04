
%option noyywrap

%{
int ind1 = 0,ind2 = 0, ind3 = 0, ind4 = 0, ind5 = 0;
char symboltable[500][50]; // symbol table
int _count = 0;




%}

INT "int"
FLOAT "float"
DOUBLE "double"
CHAR "char"
IF "if"
ELSE "else"
FOR "for"
WHILE "while"
BREAK "break"
CONTINUE "continue"
DO "do"
SHORT "short"
LONG "long"
SWITCH "switch"
CASE "case"
RETURN "return"
CONST "const"
MAIN "main"
VOID "void"
IDENTIFIER [A-Za-z_][A-Za-z0-9_]*
GREATER ">"
GREATERANDEQUAL ">="
LESS "<"
LESSANDEQUAL "<="
EQUAL "=="
NOTEQUAL "!="
ASSIGN "="
ADD "+"
SUB "-"
MUL "*"
DIV "/"
MODULODIV "%"
BITAND "&"
BITOR "|"
BITXOR "^"
BITNOT "~"
AND "&&"
OR "||"
LEFTCURLY "{"
RIGHTCURLY "}"
LEFTPAR "("
RIGHTPAR ")"
LEFTBRAC "["
COLON ":"
RIGHTBRAC "]"
SEMICOLON ";"
SPACE " "
COMMA ","
SPACES {SPACE}+
TAB  '\t'
TABSPACES {TAB}+
INTEGERCONSTANT [0-9]+
FLOATINGPOINTCONSTANT [0-9]+"."[0-9]+
STRINGCONSTANT \".*\"
STRUCT "struct"
UNION "union"
AUTO "auto"
REGISTER "register"
STATIC "static"
VOLATILE "volatile"
UNSIGNED "unsigned"
EXTERN "extern"
DEFAULT "default"
SIZEOF "sizeof"
ENUM "enum"
BIGCOMMENT "/"(.|\n)*"/"
COMMENT "//"(.)* 
PRINTF "printf"
SCANF "scanf"
%%
{COMMENT} {}
{BIGCOMMENT} {}
{SCANF} {printf("keyword %s \n", yytext);}
{PRINTF} {printf("keyword %s \n", yytext);}
{STRUCT} {printf("keyword %s \n", yytext);}
{UNION} {printf("keyword %s \n", yytext);} 
{AUTO} {printf("keyword %s \n", yytext);} 
{REGISTER} {printf("keyword %s \n", yytext);} 
{STATIC} {printf("keyword %s \n", yytext);} 
{VOLATILE} {printf("keyword %s \n", yytext);} 
{UNSIGNED} {printf("keyword %s \n", yytext);} 
{EXTERN} {printf("keyword %s \n", yytext);} 
{DEFAULT} {printf("keyword %s \n", yytext);} 
{SIZEOF} {printf("keyword %s \n", yytext);} 
{ENUM} {printf("keyword %s \n", yytext);} 
{INT} {printf("keyword %s \n", yytext);/*count[0]++;*/}
{FLOAT} {printf("keyword %s \n", yytext);/*count[1]++;*/}
{DOUBLE} {printf("keyword %s \n", yytext);/*count[2]++;*/}
{CHAR} {printf("keyword %s \n", yytext);/*count[3]++;*/}
{IF} {printf("keyword %s \n", yytext);/*count[4]++;*/}
{ELSE} {printf("keyword %s \n", yytext);/*count[5]++;*/}
{FOR} {printf("keyword %s \n", yytext);/*count[6]++;*/}
{WHILE} {printf("keyword %s \n", yytext);/*count[7]++;*/}
{BREAK} {printf("keyword %s \n", yytext);/*count[8]++;*/}
{CONTINUE} {printf("keyword %s \n", yytext);/*count[9]++;*/}
{DO} {printf("keyword %s \n", yytext);/*count[10]++;*/}
{SHORT} {printf("keyword %s \n", yytext);/*count[11]++;*/}
{LONG} {printf("keyword %s \n", yytext);/*count[12]++;*/}
{SWITCH} {printf("keyword %s \n", yytext);/*count[13]++;*/}
{CASE} {printf("keyword %s \n", yytext);/*count[14]++;*/}
{RETURN} {printf("keyword %s \n", yytext);/*count[15]++;*/}
{CONST} {printf("keyword %s \n", yytext);/*count[16]++;*/}
{MAIN} {printf("keyword %s \n", yytext);/*count[17]++;*/}
{LEFTPAR} {printf("symbol %s \n", yytext);/*count[18]++;*/}
{RIGHTPAR} {printf("symbol %s \n", yytext);/*count[19]++;*/}
{LEFTCURLY} {printf("symbol %s \n", yytext);/*count[20]++;*/}
{LEFTBRAC} {printf("symbol %s \n", yytext);/*count[21]++;*/}
{RIGHTCURLY} {printf("symbol %s \n", yytext);/*count[21]++;*/}
{COMMA} {printf("symbol %s \n", yytext);/*count[21]++;*/}
{RIGHTBRAC} {printf("symbol %s \n", yytext);/*count[22]++;*/}
{GREATER} {printf("symbol %s \n", yytext);/*count[23]++;*/}
{GREATERANDEQUAL} {printf("symbol %s \n", yytext);/*count[24]++;*/}
{LESS} {printf("symbol %s \n", yytext);/*count[25]++;*/}
{COLON} {printf("symbol %s \n", yytext);/*count[25]++;*/}

{LESSANDEQUAL} {printf("symbol %s \n", yytext);/*count[26]++;*/}
{EQUAL} {printf("symbol %s \n", yytext);/*count[27]++;*/}
{NOTEQUAL} {printf("symbol %s \n", yytext);/*count[28]++;*/}
{ASSIGN} {printf("symbol %s \n", yytext);/*count[29]++;*/}
{ADD} {printf("operation %s \n", yytext);/*count[30]++;*/}
{SUB} {printf("operation %s \n", yytext);/*count[31]++;*/}
{MUL} {printf("operation %s \n", yytext);/*count[32]++;*/}
{DIV} {printf("operation %s \n", yytext);/*count[33]++;*/}
{MODULODIV} {printf("operation %s \n", yytext);/*count[34]++;*/}
{BITAND} {printf("operation %s \n", yytext);/*count[35]++;*/}
{BITOR} {printf("operation %s \n", yytext);/*count[36]++;*/}
{BITXOR} {printf("operation %s \n", yytext);/*count[37]++;*/}
{BITNOT} {printf("operation %s \n", yytext);/*count[38]++;*/}
{AND} {printf("operation %s \n", yytext);/*count[39]++;*/}  
{OR} {printf("operation %s \n", yytext);/*count[40]++;*/}
{SEMICOLON}  {printf("symbol %s \n", yytext);/*count[28]++;*/}

{SPACES} {}
{TABSPACES} {}
{IDENTIFIER} {strcpy(symboltable[ind1],yytext); strcat(symboltable[ind1], " identifier"); printf("identifer %s \n", yytext); ind1++;_count++;}
{INTEGERCONSTANT} {/*strcpy(intconstants[ind2], yytext);*/ printf("integerconstant %s \n", yytext); ind2++;}
{FLOATINGPOINTCONSTANT} {/*strcpy(floatingpointconstant[ind3], yytext);*/ printf("floatingpointconstant %s \n", yytext); ind3++;}
{STRINGCONSTANT} {/*strcpy(stringconstant[ind4] , yytext); */ printf("stringconstant %s \n", yytext); ind4++;}
 

%%



void ExportToFile(){
   FILE *fptr =  fopen("symbol_table.txt", "w");
    if(fptr == NULL){
        printf("The file is not opened. The program is exiting");
        exit(0);
    }
    else{
        for(int i= 0;i<_count;i++){
          
                fprintf(fptr,"%d. %s\n", i+1, symboltable[i] );
            
        }

    }


}

int main(int argc, char* argv[]){
    
     if(argc > 1){
    FILE *file = fopen(argv[1],"r");
    if(file){
    yyin = file;
    }
    }
    yylex();
    ExportToFile();

    return 0;
}
