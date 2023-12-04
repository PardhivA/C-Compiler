%{
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;
int count = 0, count_label = 0;
int label_count = 0;
char **stack ;
// char **stack_else;
char **switch_out;
char **expr_label;
int expr_label_count =0 ;
int stack_count = 0;
int switch_out_count = 0;
int switch_label_count = 0;
int arr_size = 1;
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


struct symbolTable{
	char **name;
	char **type;
	// int **val;
	int **addr;
	int cur_index;
	// int par_index;
};

struct symbolTable *tables;
int table_index = 0;
void PreorderTraversal(struct Node*);
void PostorderTraversal(struct Node*);
char *gen_var();
char *gen_label();
char *gen_out_fun();
void gen_addr(int num);
char *itoa(int num);
void initialize();
%}


%union{ // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	int val;
	float fval;
	struct charac_node *Charac_node;
}
%token INT FLOAT LONGL CHAR DOUBLE
%token NUMBER
%token  ID
%token  FLOAT_NUMBER
%type <String> TYPE
%token INC DEC  LPAREN RPAREN RELAND REOR NOT BOOLOR BOOLAND 
%token RELGREAT
%token RELLESS
%token RELGREATEQUAL
%token RELLESSEQUAL
%token RELNOTEQUAL
%token RELEQUAL
%token  ELSE  LBRACE RBRACE
%token<String> IF
%token<String> WHILE
%token<String> SWITCH
%token <String> BREAK
%token <String> CASE
%token <String> DEFAULT	
%type<String>FACT
%type<String>REC
%type<String>REC1
%type<String>REC2
/* %type<String>TEMPO */
%type<String> EXPR
%type<String> TERM

%type<String>FACT1


%type<String> EXPR1
%type<String> TERM1
%type<String> IDTEMP 
%type<String> IDTEMP2 
%type<String> IDALL // it is for IDTEMP
%type<String> IDALL2 // it is for IDTEMP2
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
%type<String> switch
%type<val> BRACKS // for IDTEMP
%type<val> BRACKS2 // for IDTEMP2 
%type<String> cases

%%

slist : 	stmt ';'  slist   
	
	|   if_control else_add_on slist
	| 	while_loop slist
	|   switch slist
	|	'{' {
		table_index++;
		// printf("cur table index : %d \n", table_index);
		
// tables[table_index].name = malloc(50 * sizeof(char *)); // Allocate name attribute in symbol table
// for(int i = 0; i < 50; i++){  tables[table_index].name[i] = malloc(40 * sizeof(char));}

// tables[table_index].type = malloc(50 * sizeof(char *)); // Allocate type attribute in symbol table
// for(int i = 0; i < 50; i++){  tables[table_index].type[i] = malloc(40 * sizeof(char));}


// tables[table_index].addr = malloc(50 * sizeof(int *)); // Allocate addr attribute in symbol table
// for(int i = 0; i < 50; i++){  tables[table_index].addr[i] = malloc(40 * sizeof(int));}

// tables[table_index].cur_index = 0;
// printf("fsdfds");
	} slist {
		// printf("inside free");
		strcpy(tables[table_index].type[0],"");
		tables[table_index].cur_index =0 ;
		table_index--;
		// printf("cur table index (after returning): %d \n", table_index);
		} '}' slist
	| {};

switch : SWITCH '(' EXPR')' {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	strcpy(expr_label[expr_label_count++], $3);
	temp1 = gen_out_fun();
	strcpy(switch_out[switch_out_count++], temp1);
	
}	'{' cases '}' {
	printf("%s: ", switch_out[switch_out_count-1]);
	expr_label_count--;
	switch_out_count--;
};

cases : CASE  EXPR {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);	
	printf("ifFalse %s = %s goto %s \n", expr_label[expr_label_count-1], $2, temp1);
	

}':' slist BREAK {printf("goto %s \n", switch_out[switch_out_count-1]); printf("%s: ",stack[stack_count-1]); stack_count--;}';' cases | DEFAULT ':' slist | {};



while_loop : WHILE  {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);
	} '(' condition ')' {
	printf("if ");	
	char *temp = (char*)malloc(40 *sizeof(char));
	temp = gen_label();
	printf("%s == TRUE then go to label %s\n", $4, temp);
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	
	strcpy(stack[stack_count++], temp1);
	strcpy(stack[stack_count++], temp);
	printf("%s: " , stack[stack_count-1]); stack_count--;
} '{'  slist '}'{printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2;} ;
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
} '{'  slist '}';

else_add_on:	 ELSE {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
	'{'  slist '}'
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
FACT1	:  INC IDALL2 {
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
		 | IDALL2 INC {
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
		 | DEC IDALL2 { 
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
		 | IDALL2 DEC {
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

FIX1	:IDALL2  {
			$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, $1);}
		| NUMBER {
			$$ = (char*)malloc(40 *sizeof(char)) ;
			sprintf($$,"%d", yylval.dval);
		}	
		|FLOAT_NUMBER {

		}; 
		 


stmt 	:		TYPE {
	strcpy(tables[table_index].type[tables[table_index].cur_index], $1);
	} REC 
				|
				IDTEMP2 '='  EXPR {
				// printf("fsdsf");	
				$$ = (char*)malloc(40 *sizeof(char));
				strcpy($$, $1);
				printf("%s = %s\n", $1, $3);
				
			}  | EXPR {};
			
// array = EXPR {check if array is declared before in symbol table}
// int array

REC 	:   IDALL  REC1 ; 
TYPE : INT {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"int");
			// printf("fsdfsdfsfddsdf %s",$$);
			}
		| FLOAT {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"float");}
		| CHAR {$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,"char");}	
		; 

REC1 	:   '=' EXPR {printf("%s = %s\n", tables[table_index].name[tables[table_index].cur_index - 1], $2);} REC2 | REC2 ;
REC2 	: ',' REC| ; 

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
FACT	:  INC IDALL2 {
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
		 | IDTEMP2 INC {
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
		 | DEC IDTEMP2 { //strcpy($$, $2);
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
		| IDALL2  {
			$$ = (char*)malloc(40 *sizeof(char));
			strcpy($$, $1);}
		| NUMBER {
			$$ = (char*)malloc(40 *sizeof(char)) ;
			sprintf($$,"%d", yylval.dval);
		}	
		|FLOAT_NUMBER {

		}; 

IDALL2 : IDTEMP2  {
	char * temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
		
				printf("%s = %s", temp , $1);
				strcpy($1 ,temp );
} BRACKS2 {
	$$= (char*)malloc(40 *sizeof(char));
			strcpy($$, $1);
	printf("\n");
};

BRACKS2 : '[' NUMBER {
	printf("[%d]", yylval.dval);
} ']'  BRACKS2 | ;

IDALL : IDTEMP {
// printf("cur id temp : %s\n", $1);
if(strcmp(tables[table_index].type[tables[table_index].cur_index], "") == 0){
	
		char* cur_type = (char*)malloc(40 *sizeof(char));
	strcpy(cur_type, tables[table_index].type[tables[table_index].cur_index - 1]);
	bool temp = false;
	for(int i = 0; i <= tables[table_index].cur_index;i++){
		if(!strcmp($1, tables[table_index].name[i])){
			if(strcmp(cur_type, tables[table_index].type[i]) == 0){
				printf("error: redclaration of %s\n", $1);
				temp = true;
			}
			else{
				printf("error: conflicting types for %s\n", $1);
				temp = true;
			}
		}
	}

	if(!temp){
	strcpy(tables[table_index].type[tables[table_index].cur_index],tables[table_index].type[tables[table_index].cur_index - 1] ); 
	
	strcpy(tables[table_index].name[tables[table_index].cur_index], $1);
	tables[table_index].addr[tables[table_index].cur_index] = 0;
	
	char* prev = (char*)malloc(40 *sizeof(char));
		strcpy(prev, tables[table_index].type[tables[table_index].cur_index-1] );
		int val= tables[table_index].addr[tables[table_index].cur_index-1];
		
			if(strcmp(prev, "float") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 8;
				gen_addr(val + 8);
				
			}
		if(strcmp(prev, "int") == 0)	
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 4;
				gen_addr(val + 4);
				
			}
			if(strcmp(prev, "char") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 1;
				gen_addr(val + 1);
				
			}
		
		printf(" %s  %s ", tables[table_index].name[tables[table_index].cur_index], tables[table_index].type[tables[table_index].cur_index]);
		
	}
}
else {
	//printf("inside first variable in multiple dec\n");

	
	
	if(tables[table_index].cur_index == 0){
		strcpy(tables[table_index].name[tables[table_index].cur_index], $1);
	tables[table_index].addr[tables[table_index].cur_index] = 0;
	gen_addr(0);
		printf(" %s %s ", tables[table_index].name[tables[table_index].cur_index], tables[table_index].type[tables[table_index].cur_index]);
	
	}
	else {
		char* cur_type = (char*)malloc(40 *sizeof(char));
	strcpy(cur_type, tables[table_index].type[tables[table_index].cur_index ]);
	bool temp = false;
	for(int i = 0; i < tables[table_index].cur_index ;i++){

		if(!strcmp($1, tables[table_index].name[i])){
			// printf("current type: %s, table found type: %s", cur_type)
			if(!strcmp(cur_type, tables[table_index].type[i])){
				printf("error: redclaration of %s\n", $1);
				temp = true;
				
			}
			else{
				printf("error: conflicting types for %s\n", $1);
				temp = true;
			}
		}
	}
		if(!temp){
			strcpy(tables[table_index].name[tables[table_index].cur_index], $1);
		char* prev = (char*)malloc(40 *sizeof(char));;
		strcpy(prev, tables[table_index].type[tables[table_index].cur_index-1] );
		int val= tables[table_index].addr[tables[table_index].cur_index-1];
		if(strcmp(prev, "float") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 8;
				gen_addr(val + 8);
				
			}
		if(strcmp(prev, "int") == 0)	
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 4;
				gen_addr(val + 4);
				
			}
			if(strcmp(prev, "char") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 1;
				gen_addr(val + 1);
				
			}
		

		printf(" %s %s ", tables[table_index].name[tables[table_index].cur_index], tables[table_index].type[tables[table_index].cur_index]);
		
}
	}
	
	
}


} BRACKS {
	if(arr_size != 1){
		if(strcmp(tables[table_index].type[tables[table_index].cur_index], "int") == 0){
			arr_size *= 4;
		printf("%d \n" ,arr_size );
		}
		if(strcmp(tables[table_index].type[tables[table_index].cur_index], "float") == 0){
arr_size *= 8;
		printf("%d \n" ,arr_size );
		}
		if(strcmp(tables[table_index].type[tables[table_index].cur_index], "char") == 0){
arr_size *= 1;
		printf("%d \n" ,arr_size );
		}
		if(tables[table_index].cur_index != 0)
		tables[table_index].addr[tables[table_index].cur_index] = tables[table_index].addr[tables[table_index].cur_index - 1] + arr_size;
		else {
			tables[table_index].addr[tables[table_index].cur_index] = arr_size;
		}
	}
	else {
		printf("\n");
	}
		arr_size = 1;
		tables[table_index].cur_index++;


} ;
BRACKS : '[' NUMBER {
	arr_size *= yylval.dval;
} ']'  BRACKS | ; 
IDTEMP : ID {
	$$ = (char*)malloc(40 *sizeof(char));
		 	strcpy($$,yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
		 ;
IDTEMP2 : ID {
	char* cur_type = (char*)malloc(40 *sizeof(char));
	strcpy(cur_type, tables[table_index].type[tables[table_index].cur_index]);
	bool check= false;
	for(int tid = 0; tid <= table_index; ++tid){
		for(int i = 0; i < 50;i++){
			if(!strcmp(yylval.lexeme, strcpy(cur_type, tables[tid].name[i]))){
				check = true;
				// if(!strcmp(cur_type, tables[table_index].type[i])){
				// 	printf("error: conflicting types for %s", yylval.lexeme);
				// }
				// else{
				// 	printf("error: redclaration of %s", yylval.lexeme);
				// }
				
			}
		}
	}

	if(!check){
		printf("var %s is not declared in current scope\n", yylval.lexeme);
	} 
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

void gen_addr(int num)
{
	/* int  num = 32424; */
/* char hex[5]; */
/* printf("fgsdfdsf");` */
/* sprintf(hex, "%x", num); */
printf("0x%x", num);

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
	switch_out = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  switch_out[i] = malloc(40 * sizeof(char));}
expr_label = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  expr_label[i] = malloc(40 * sizeof(char));}
	
	
	tables = malloc(10  * sizeof(struct symbolTable));
	table_index = 0;
for(int j =0 ;j < 10;j++){
	tables[j].name = malloc(50 * sizeof(char *)); // Allocate name attribute in symbol table
for(int i = 0; i < 50; i++){  tables[j].name[i] = malloc(40 * sizeof(char));}

tables[j].type = malloc(50 * sizeof(char *)); // Allocate type attribute in symbol table
for(int i = 0; i < 50; i++){  tables[j].type[i] = malloc(40 * sizeof(char));}


tables[j].addr = malloc(50 * sizeof(int *)); // Allocate addr attribute in symbol table
for(int i = 0; i < 50; i++){  tables[j].addr[i] = malloc(40 * sizeof(int));}

tables[j].cur_index = 0;
}

	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}


