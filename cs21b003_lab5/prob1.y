%{
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int yylex();
void yyerror(char *);
int eflag=0;
extern FILE * yyin;
%}

%token NUMBER FLOAT ADD SUB SCOL IOTA
%%

expr : stmt SCOL {;}  expr 
	| stmt {;}
     ;
stmt : NUMBER ADD IOTA NUMBER {printf("VALID \n");} | NUMBER SUB IOTA NUMBER {printf("VALID \n");} | FLOAT SUB IOTA FLOAT {printf("VALID \n");} | FLOAT ADD IOTA FLOAT {printf("VALID \n");} 
		| NUMBER ADD NUMBER IOTA  {printf("VALID \n");} | NUMBER SUB NUMBER IOTA  {printf("VALID \n");} | FLOAT SUB FLOAT IOTA  {printf("VALID \n");} | FLOAT ADD FLOAT IOTA  {printf("VALID \n");} ;  
    

%%


void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

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

