%{
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;
//  INC "("ID ")" | "("ID ")" INC | DEC "("ID ")" | "("ID ")" DEC | 

struct  Node{
	struct Node *left;
	struct Node *right;
	struct Node *middle;
	char lexeme[20];
	int dval;
	float fval;
	char token[20];
};

void PreorderTraversal(struct Node*);
void PostorderTraversal(struct Node*);

%}


%union{ // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	float fval;
}
%token NUMBER
%token  ID
%token  FLOAT_NUMBER
%token INC DEC  LPAREN RPAREN 
%type<node>FACT


%type<node> EXPR
%type<node> TERM

%type<node> IDTEMP 
%type<node> IDTEMP2 

%type<node> FIX
%type<node> stmt
%type<node> slist



%%

slist : 	stmt ';' {   printf("\nPreorder Traversal \n"); printf("-----------------------------------------\n");printf("\nToken	Lexeme\n");printf("-----------------------------------------\n");PreorderTraversal($1);   printf("\nPostorder Traversal \n"); printf("-----------------------------------------\n");printf("\nToken	Lexeme\n");printf("-----------------------------------------\n");PostorderTraversal($1); printf("\nAccepted\n\n");} slist  | {} ;

stmt 	:	IDTEMP '='  EXPR    {
			struct Node * n = malloc(sizeof(struct Node));
			$$ = n;
			strcpy(n->lexeme,"=") ;
			n->left = $1 ;
			n->right = $3; 
			strcpy(n->token, "OP");
			}; 
EXPR 	: 	EXPR '+' TERM 	{
			struct Node * n = malloc(sizeof(struct Node));
			$$ = n;
			strcpy(n->lexeme , "+"); 
			n->left = $1; 
			n->right = $3;
			strcpy(n->token, "OP");
			}
			| EXPR '-' TERM {
			struct Node * n = malloc(sizeof(struct Node));
			$$ = n;
			strcpy(n->lexeme , "-"); 
			n->left = $1;
			n->right = $3;
			strcpy(n->token, "OP");
			}	
			| 	TERM   {$$ = $1;};
TERM 	:	TERM '*' FACT {
			struct Node * n = malloc(sizeof(struct Node));
			$$ = n;
			strcpy(n->lexeme , "*"); 
			n->left = $1; 
			n->right = $3;
			strcpy(n->token, "OP");
			}	
			| TERM '/' FACT {
			struct Node * n = malloc(sizeof(struct Node));
			$$ = n;
			strcpy(n->lexeme , "/");  
			n->left = $1; 
			n->right = $3;
			strcpy(n->token, "OP");
			}	
			| 	FACT  {
				 $$ = $1;};
FACT	:  INC IDTEMP {struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 
		 strcpy(n->lexeme, "++");
		 strcpy(n->token, "UOP");
		 n->middle = $2;
		 }
		 | IDTEMP INC {struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 strcpy(n->lexeme,"++");
		 strcpy(n->token, "UOP");
		 n->middle = $1;
		 }
		 | DEC IDTEMP {struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 strcpy(n->lexeme, "--");
		 strcpy(n->token, "UOP");
		 n->middle = $2;
		 }
		 | IDTEMP2 DEC {struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 strcpy(n->lexeme, "--");
		 strcpy(n->token, "UOP");
		 n->middle = $1;
		 }
		 | '-' FIX {struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 strcpy(n->lexeme, "-");
		 strcpy(n->token, "UOP");
		 n->middle = $2;
		 }
		 |FIX {$$ = $1;};

FIX	:	LPAREN EXPR RPAREN  {
		 $$ = $2;}
		| IDTEMP  {$$  = $1;}
		| NUMBER {
		struct Node * n =  malloc(sizeof(struct Node));
		$$ = n;
		n->left =NULL;
		n->right =NULL; 
		n->dval = yylval.dval; 
		strcpy(n->token , "NUM");}	
		|FLOAT_NUMBER {
		struct Node * n =  malloc(sizeof(struct Node));
		$$ = n;
		n->left =NULL;
		n->right =NULL; 
		n->fval = yylval.fval; 
		strcpy(n->token , "FNUM");}; 
IDTEMP : ID {
		 struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 strcpy(n->lexeme, yylval.lexeme);
		 strcpy(n->token, "ID");}
		 ;
IDTEMP2 : ID {
		 struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 n->middle = NULL;
		 strcpy(n->lexeme, yylval.lexeme);
		 strcpy(n->token, "ID");} | 
		 '-' IDTEMP {struct Node * n =  malloc(sizeof(struct Node));
		 $$ = n; 
		 n->left = NULL; 
		 n->right = NULL; 
		 strcpy(n->lexeme, "-");
		 strcpy(n->token, "UOP");
		 n->middle = $2;
		 }
		 ;		 

%%


void PreorderTraversal(struct Node *head){
	if(head == NULL){return;}
	if(!strcmp(head->token, "OP" )|| !strcmp(head->token, "ID")){
		printf("%s        %s \n", head->token, head->lexeme);
	}
	if(!strcmp(head->token, "NUM")){
		printf("%s        %d\n", head->token, head->dval);
	}
	if(!strcmp(head->token, "FNUM")){
		printf("%s        %f\n", head->token, head->fval);
	}
	if(!strcmp(head->token, "UOP")){
		/* if(strcmp(head->lexeme, "-") == 0){
		printf("%s        %s\n", head->token, head->lexeme);
			printf("%s        %s\n", head->middle->token, head->middle->lexeme); 
		
		}
		else{
		printf("%s        %s\n", head->token, head->lexeme);
		printf("%s        %s\n", head->middle->token, head->middle->lexeme); } */
	printf("%s        %s\n", head->token, head->lexeme);
	PreorderTraversal(head->middle);
	}

	PreorderTraversal(head->left);
	PreorderTraversal(head->right);
}

void PostorderTraversal(struct Node *head){
	if(head == NULL){return;}

	PostorderTraversal(head->left);
	PostorderTraversal(head->right);
	if(!strcmp(head->token, "OP" )|| !strcmp(head->token, "ID")){
		printf("%s        %s \n", head->token, head->lexeme);
	}
	if(!strcmp(head->token, "NUM")){
		printf("%s        %d\n", head->token, head->dval);
	}
	if(!strcmp(head->token, "FNUM")){
		printf("%s        %f\n", head->token, head->fval);
	}
	if(!strcmp(head->token, "UOP")){
		/* if(strcmp(head->lexeme, "-") == 0){
			printf("%s        %s\n", head->middle->token, head->middle->lexeme); 
		printf("%s        %s\n", head->token, head->lexeme);
		
		}
		else{ */
			PostorderTraversal(head->middle);
		printf("%s        %s\n", head->token, head->lexeme);
		//}
	}

}

int yyerror(char *s){
	
  
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

