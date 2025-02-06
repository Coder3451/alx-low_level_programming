CC = gcc # Set the compiler (replace with your compiler if needed)

# Target (executable):
program: greet.o name.o main.o
	$(CC) greet.o name.o main.o -o program

# Object files and dependencies:
greet.o: greet.c
	$(CC) -c greet.c

name.o: name.c
	$(CC) -c name.c
main.o: main.c
	$(CC) -c main.c

# Clean target (removes object files and the executable):
clean:
	rm -f *.o program *.h
