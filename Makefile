all: main

main: calculadora.o main.o
	gcc calculadora.o main.o -o main

main.o: main.c calculadora.h
	gcc -c main.c

calculadora.o: calculadora.c calculadora.h
	gcc -c calculadora.c

clean:
	rm -f *.0 main

