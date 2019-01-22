all:permutacao

permutacao:main.o permutacao.o
	gcc permutacao.o main.o -o permutacao

permutacao.o:permutacao.c
	gcc -c permutacao.c -o permutacao.o

main.o:main.c
	gcc -c main.c -o main.o

clean:
	rm -f permutacao*.o
	rm -f main*.o
	rm -f permutacao
