%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

%}
digit [0-9]
%%
{digit}+"."{digit}+ return FLOAT;
{digit}+ return NUMBER;
"+"     return ADD;
"-"	return SUB;
";"	return SCOL;
"i"      return IOTA;

[ \t] ;      /* ignore white space */
.  		{ return yytext[0]; }
%%
