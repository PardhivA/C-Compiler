CFLAGSrn=-g -DDEBUG -ll
CC=gcc

all:lexer

mylexer: lex.yy.c 
	$(CC)  lex.yy.c -o lexer

lex.yy.c: $(fname)
	lex $(fname)

clean: 
	rm -f *.o lex.yy.c
