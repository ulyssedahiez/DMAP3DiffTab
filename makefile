CC=gcc
CFLAGS= -Wall -ansi -W -pedantic -std=c99

program.exe : main.o tableau.o 
	$(CC) -o program.exe main.o tableau.o 

main.o : main.c
	$(CC) $(CFLAGS) -c main.c

tableau.o : tableau.c tableau.h
	$(CC) $(CFLAGS) -c tableau.c



clean :
	rm -rf *.o