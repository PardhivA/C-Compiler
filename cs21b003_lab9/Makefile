parser: y.tab.c lex.yy.c y.tab.h
	gcc -w y.tab.c lex.yy.c  -ll -ly  -o parser
lex.yy.c: $(fname).l
	lex $(fname).l
y.tab.c: $(fname).y
	yacc -v -d -t $(fname).y -Wcounterexamples
clean:
	rm -f parser y.tab.c lex.yy.c y.tab.h y.output
