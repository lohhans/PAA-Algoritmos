all:kruskal

kruskal:main.o kruskal.o
	gcc kruskal.o main.o -o kruskal

kruskal.o:kruskal.c
	gcc -c kruskal.c -o kruskal.o

main.o:main.c
	gcc -c main.c -o main.o

clean:
	rm -f kruskal*.o
	rm -f main*.o
	rm -f kruskal
