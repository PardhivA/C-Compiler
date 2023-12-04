%{
#include<stdio.h>
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;
//  INC '('ID ')' | '('ID ')' INC | DEC '('ID ')' | '('ID ')' DEC | 

%}

%token NUMBER ID INC DEC FLOAT_NUMBER LPAREN RPAREN
%%

slist : 	stmt ';' {printf("\tAccepted\n\n");} slist |  ;

stmt 	:	ID '='  EXPR;
EXPR 	: 	EXPR '+' TERM 	| EXPR '-' TERM 	| 	TERM   ;
TERM 	:	TERM '*' FACT 	| TERM '/' FACT 	| 	FACT ;
FACT	: 	INC IDM | IDM INC | DEC IDM | IDM DEC | '-' FIX | FIX;
IDM	: 	ID ;
FIX	:	LPAREN EXPR RPAREN | ID | NUMBER |FLOAT_NUMBER; 

%%

int yyerror(char *s){
	
  while(yylex() != ';') {;}
  printf("Error \n ");
  yyparse();
}

int main(int argc, char* argv[])
{
	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}

