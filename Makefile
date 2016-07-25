main: main.o

main.o: main.c
	gcc -c main.c -o main.o
clean:
	rm main.o main
