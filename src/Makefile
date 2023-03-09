OBJS	= parser.tab.c lex.yy.c
NOBJS   = grammer.tab.c lex.yy.c

CC	= g++

newcompiler:    $(NOBJS)
		$(CC) $(NOBJS) -o newcompiler
javacompiler:	$(OBJS)
		$(CC) $(OBJS) -o javacompiler


lex.yy.c:	scanner.l parser.tab.h
		flex -o lex.yy.c scanner.l

parser.tab.c parser.tab.h:	parser.y
		bison -v -o parser.tab.c -d parser.y

grammer.tab.c grammer.tab.h:	grammer.y
		bison -v -o grammer.tab.c -d grammer.y

clean:
	rm -f *.output *.c *.cc *.h *.png *.dot javacompiler
