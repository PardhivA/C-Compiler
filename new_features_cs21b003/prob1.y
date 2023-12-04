%{
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;
int count = 0, count_label = 0;
int label_count = 0;
char **stack ;
char **stackWhile ; // for continue
char **stackWhile2 ; // for break
int stack_count_while = 0; // for continue
int stack_count_while2 = 0; // for break;
// char **stack_else;
char **switch_out;
char **expr_label;
int expr_label_count =0 ;
int stack_count = 0;
int switch_out_count = 0;
int switch_label_count = 0;
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

struct charac_node{
	char *if_label;
	char *else_label;
	char *lexeme;
	char *after_label;
};

void PreorderTraversal(struct Node*);
void PostorderTraversal(struct Node*);
char *gen_var();
char *gen_label();
char *gen_out_fun();
char *itoa(int num);
void initialize();
%}


%union{ // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	float fval;
	struct charac_node *Charac_node;
}

%token NUMBER
%token  ID
%token STRINGNAME
%token  FLOAT_NUMBER
%token INC DEC  LPAREN RPAREN RELAND REOR NOT BOOLOR BOOLAND 
%token RELGREAT
%token RELLESS
%token RELGREATEQUAL
%token RELLESSEQUAL
%token RELNOTEQUAL
%token RELEQUAL
%token  ELSE  LBRACE RBRACE
%token<String> IF
%token<String> DO
%token<String> WHILE
%token<String> SWITCH
%token <String> BREAK
%token <String> CONTINUE
%token <String> CASE
%token <String> DEFAULT	
%type<String>FACT

%type<String> type
%type<String> EXPR
%type<String> TERM

%type<String>FACT1


%type<String> EXPR1
%type<String> TERM1

%type<String> IDTEMP 
%type<String> IDTEMP2 
%type<String> FIX1

%type<String> FIX
%type<String> stmt
%type<String> slist
/* %type<String> ifstmt */


%type<String> condition
%type<String> sub_condition

%type<String> boolop
%type<String> relop
%type<String> if_control
%type<String> else_add_on
/* %type<String> ifelse */
%type<String> while_loop
%type<String> do_while

%type<String> switch

%type<String> cases

%%

slist : 	stmt ';'  slist   
	
	|   if_control else_add_on slist
	| 	while_loop slist 
	|   switch slist
	| 	do_while ';' slist
	| {};

slist1 : 	stmt ';'  slist1   
	
	|   if_control else_add_on slist1
	| 	while_loop slist1 
	|   switch slist1
	| 	do_while ';' slist1
	| 	CONTINUE {printf("goto %s \n", stackWhile[stack_count_while -1]);} ';' slist1
	|   BREAK {printf("goto %s \n", stackWhile2[stack_count_while2 -1]);} ';' slist1
	| {};

switch : SWITCH '(' type')' {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	strcpy(expr_label[expr_label_count++], $3);
	temp1 = gen_out_fun();
	strcpy(switch_out[switch_out_count++], temp1);
	
}	'{' cases '}' {
	printf("%s: ", switch_out[switch_out_count-1]);
	expr_label_count--;
	switch_out_count--;
};

cases : CASE  type {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	strcpy(stack[stack_count++], temp1);	
	printf("ifFalse %s = %s goto %s \n", expr_label[expr_label_count-1], $2, temp1);
} ':' slist BREAK {printf("goto %s \n", switch_out[switch_out_count-1]); printf("%s: ",stack[stack_count-1]); stack_count--;}';' cases | DEFAULT ':' slist | {};

type : EXPR {
	$$ = (char*)malloc(40 *sizeof(char));
	strcpy($$, $1);
	} | STRINGNAME {
	$$ = (char*)malloc(40 *sizeof(char));
	strcpy($$, yylval.lexeme);
	}

do_while : DO {char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);} '{'  slist '}' WHILE 
	'(' condition ')' {
	printf("if ");	
	
	printf("%s == TRUE then go to label %s\n", $8, stack[stack_count-1]);
	stack_count--;
	// char *temp1 = (char*)malloc(40 *sizeof(char));
	// temp1 = gen_label();
	// printf("go to label %s\n",temp1);
	
	// strcpy(stack[stack_count++], temp1);
	// strcpy(stack[stack_count++], temp);
	// printf("%s: " , stack[stack_count-1]); stack_count--;
};

while_loop : WHILE  {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	strcpy(stackWhile[stack_count_while++], temp1);
	printf("%s: " , stack[stack_count-1]);
	} '(' condition ')' {
	printf("if ");	
	char *temp = (char*)malloc(40 *sizeof(char));
	temp = gen_label();
	printf("%s == TRUE then go to label %s\n", $4, temp);
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	strcpy(stackWhile2[stack_count_while2++], temp1);
	printf("go to label %s\n",temp1);
	
	strcpy(stack[stack_count++], temp1);
	strcpy(stack[stack_count++], temp);
	printf("%s: " , stack[stack_count-1]); stack_count--;
} '{'  slist1 '}'{printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2; stack_count_while--;stack_count_while2--;} ;



if_control: IF '(' condition ')' {
	printf("if ");	
	char *temp = (char*)malloc(40 *sizeof(char));
	temp = gen_label();
	printf("%s == TRUE then go to label %s\n", $3, temp);
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	
	strcpy(stack[stack_count++], temp1);
	strcpy(stack[stack_count++], temp);
	printf("%s: " , stack[stack_count-1]); stack_count--;
} '{'  slist1 '}';

else_add_on:	 ELSE {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
	'{'  slist1 '}'
	{
		printf("%s: " , stack[stack_count-1]); stack_count--;
	} 
	| { printf("%s: " , stack[stack_count-1]); stack_count--;} ;

condition : sub_condition boolop condition {$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = %s %s %s \n", $$, $1, $2, $3);}| sub_condition {$$ = (char*)malloc(40 *sizeof(char)); strcpy($$, $1);}| NOT sub_condition {$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = !%s \n", $$, $2);
} | NOT sub_condition boolop condition {$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = !%s %s %s \n", $$, $2, $3, $4);} | NOT '(' condition ')' boolop condition {$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = !(%s) %s %s \n", $$, $3, $5, $6	);} | '(' condition ')' boolop condition {$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = !(%s) %s %s \n", $$, $2, $4, $5	);} |  NOT '('condition')' {$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = !%s \n", $$, $3);
};
sub_condition : EXPR1 relop EXPR1{
		$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = %s %s %s \n", $$, $1, $2, $3);
}| EXPR1 {
	$$ = (char*)malloc(40 *sizeof(char));
		strcpy($$,gen_var()); 
		printf("%s = %s  \n", $$, $1);
};


boolop : BOOLAND {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"&&");}
		| BOOLOR {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"||");};



relop :   RELAND {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"&");}
		| RELEQUAL {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"==");}
		| RELGREAT {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,">");}
		| RELGREATEQUAL {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,">=");}
		| RELLESS {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"<");}
		| RELLESSEQUAL {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"<=");}
		| RELNOTEQUAL {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"!=");}
		| REOR {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"|");}
		| '=' {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"=");};

EXPR1 	: 	EXPR1 '+' TERM1 	{
	$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, gen_var());
				// char temp[20];
				// strcpy(temp, $$);
				// strcat(temp, "=");
				// strcat(temp, $1);
				// strcat(temp, "+");
				// strcat(temp, $3);
				printf("%s = %s + %s\n", $$, $1, $3);
			}
			| EXPR1 '-' TERM1 {
				$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, gen_var());
				// char temp[20];
				// strcpy(temp, $$);
				// strcat(temp,"=");
				// strcat(temp, $1);
				// strcat(temp, "-");
				// strcat(temp, $3);
				// printf("%s", temp);
				printf("%s = %s - %s\n", $$, $1, $3);
			}	
			| 	TERM1   {strcpy($$, $1);};
TERM1 	:	TERM1 '*' FACT1 {
	$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, gen_var());
			// 	char temp[20];
			// 	strcpy(temp, $$);
			// 	strcat(temp,"=");
			// 	strcat(temp, $1);
			// 	strcat(temp, "*");
			// 	strcat(temp, $3);
				// printf("%s", temp);
				printf("%s = %s * %s\n", $$, $1, $3);
			}	
			| TERM1 '/' FACT1 {
				$$ = (char *)malloc(40 *sizeof(char));
			strcpy($$, gen_var());
			// 	char temp[20];
			// 	strcpy(temp, $$);
			// 	strcat(temp,"=");
			// 	strcat(temp, $1);
			// 	strcat(temp, "/");
			// 	strcat(temp, $3);
				// printf("%s", temp);
				printf("%s = %s / %s\n", $$, $1, $3);
			}	
			| 	FACT1  {
				 strcpy($$, $1);};
FACT1	:  INC IDTEMP {
	$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, $2);
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $2);
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",$2 , temp1);
		 }
		 | IDTEMP INC {
			$$ = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, $1);
			strcpy($$, temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $1);
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",$1 , temp1);
	
		 }
		 | DEC IDTEMP { 
				$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, $2);
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $2);
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",$2 , temp1);
		 }
		 | IDTEMP2 DEC {
				$$ = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, $1);
			strcpy($$, temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $1);
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",$1 , temp1);
	
		 }
		 | '-' FIX1 {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, temp);
			printf("%s = -1 * %s\n", temp, $2);
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
		 |FIX1 {strcpy($$, $1);};

FIX1	:IDTEMP  {
			$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, $1);}
		| NUMBER {
			$$ = (char*)malloc(40 *sizeof(char)) ;
			sprintf($$,"%d", yylval.dval);
		}	
		|FLOAT_NUMBER {

		}; 
		 


stmt 	:	IDTEMP '='  EXPR {
				// printf("fsdsf");	
				$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, $1);
				printf("%s = %s\n", $1, $3);
				
			}  | EXPR {};
EXPR 	: 	EXPR '+' TERM 	{
	$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, gen_var());
			
				printf("%s = %s + %s\n", $$, $1, $3);
			}
			| EXPR '-' TERM {
				$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, gen_var());
				
				printf("%s = %s - %s\n", $$, $1, $3);
			}	
			| 	TERM   {strcpy($$, $1);};
TERM 	:	TERM '*' FACT {
	$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, gen_var());
		
				printf("%s = %s * %s\n", $$, $1, $3);
			}	
			| TERM '/' FACT {
				$$ = (char *)malloc(40 *sizeof(char));
			strcpy($$, gen_var());
		
				printf("%s = %s / %s\n", $$, $1, $3);
			}	
			| 	FACT  {
				 strcpy($$, $1);};
FACT	:  INC IDTEMP {
	$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, $2);
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $2);
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",$2 , temp1);
		 }
		 | IDTEMP INC {
			$$ = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, $1);
			strcpy($$, temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $1);
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",$1 , temp1);
	
		 }
		 | DEC IDTEMP { //strcpy($$, $2);
				// char temp[20];
				// strcpy(temp ,gen_var());
				// char temp1[20];
				// strcpy(temp1, temp);
				// strcat(temp, "=");
				// strcat(temp, $2);
				// strcat(temp, "-");
				// strcat(temp, "1");
				// printf("%s", temp);

				// strcat($2, "=");
				// strcat($2, temp1);

				// printf("%s",$2);
				$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, $2);
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $2);
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",$2 , temp1);
		 }
		 | IDTEMP2 DEC {//strcpy($$, $1);
				// char temp[20];
				// strcpy(temp ,gen_var());
				// char temp1[20];
				// strcpy(temp1, temp);
				// strcat(temp, "=");
				// strcat(temp, $1);
				// strcat(temp, "-");
				// strcat(temp, "1");
				// printf("%s", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				// printf("%s",$1);
				$$ = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, $1);
			strcpy($$, temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, $1);
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",$1 , temp1);
	
		 }
		 | '-' FIX {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, temp);
			printf("%s = -1 * %s\n", temp, $2);
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
		 |FIX {strcpy($$, $1);};

FIX	:	'(' EXPR ')'  {
	$$  = (char*)malloc(40 *sizeof(char));
		 strcpy($$, $2);}
		| IDTEMP  {
			$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, $1);}
		| NUMBER {
			$$ = (char*)malloc(40 *sizeof(char)) ;
			sprintf($$,"%d", yylval.dval);
		}	
		|FLOAT_NUMBER {

		}; 
IDTEMP : ID {
	$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
		 ;
IDTEMP2 : ID {
	$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
		 ;		 

%%

char * gen_var(){
	char* temp = (char*)malloc(40 *sizeof(char));
	char temp1[10];
	strcpy(temp, "t");
	sprintf(temp1,"%d", count);
	strcat(temp,temp1);
	count++;
	return temp;
}

char * gen_label(){
	char* temp = (char*)malloc(40 *sizeof(char));
	char temp1[10];
	strcpy(temp, "L");
	sprintf(temp1,"%d", count_label);
	strcat(temp,temp1);
	count_label++;
	return temp;
}
char * gen_out_fun(){
	char* temp = (char*)malloc(40 *sizeof(char));
	char temp1[10];
	strcpy(temp, "OUT");
	sprintf(temp1,"%d", switch_label_count);
	strcat(temp,temp1);
	switch_label_count++;
	return temp;
}


void initialize(){
	

}
char *itoa(int num){
	char temp[20];
	int count = 0;
	for(int i = 0;num != 0;i++){
		int rem = num%10;
		temp[i] = rem + 48;
		count++;
	}
	int ind = 0;
	char temp1[20];
	for(int i = count - 1;i>=0;i++){
		temp1[ind++] = temp[i];
	}
	/* strrev(temp); */
	return temp1;
}

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
	printf("------------ INTERMEDIATE CODE ------------- \n");
	stack = malloc(50 * sizeof(char *)); // Allocate row pointers
for(int i = 0; i < 50; i++){  stack[i] = malloc(40 * sizeof(char));}
	stackWhile = malloc(50 * sizeof(char *)); // Allocate row pointers
for(int i = 0; i < 50; i++){  stackWhile[i] = malloc(40 * sizeof(char));}
	stackWhile2 = malloc(50 * sizeof(char *)); // Allocate row pointers

for(int i = 0; i < 50; i++){  stackWhile2[i] = malloc(40 * sizeof(char));}

	switch_out = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  switch_out[i] = malloc(40 * sizeof(char));}
expr_label = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  expr_label[i] = malloc(40 * sizeof(char));}


	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}


