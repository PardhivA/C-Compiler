%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
%}
alpha [A-Za-z]
digit [0-9]
%%

{alpha}({alpha}|{digit})*    	    {strcpy(yylval.lexeme , yytext);
                                        printf("%s",yytext); return ID;}
{digit}+"."{digit}+		            {printf("%s",yytext);
                                        yylval.fval = atof(yytext) ;
                                        return FLOAT_NUMBER;}
{digit}+ 							{printf("%s",yytext);
                                        yylval.dval = atoi(yytext) ;
                                        return NUMBER;}
"++"					            {printf("%s",yytext);return INC;}
"--"					            {printf("%s",yytext);return DEC;}
"+"      							{printf("%s",yytext);return '+';}
"-"      							{printf("%s",yytext);return '-';}
"*"	 								{printf("%s",yytext);return '*';}
"/"     							{printf("%s",yytext);return '/';}
"=" 								{printf("%s",yytext);return '=';}
"("									{printf("%s",yytext);return LPAREN;}
")"									{printf("%s",yytext);return RPAREN;}
";"									{printf("%s",yytext);return ';';}
[ \t\n] {;}      /* ignore white space */

"$"		{ return 0; }

.  		{ return yytext[0]; }
%%