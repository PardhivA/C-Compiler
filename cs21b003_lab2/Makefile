CFLAGS=-g -DDEBUG -ll
CC=gcc

all:lexer

lexer: lex.yy.c 
	$(CC)  lex.yy.c -o lexer

lex.yy.c: $(fname)
	lex $(fname)

clean: 
	rm -f *.o lex.yy.c
