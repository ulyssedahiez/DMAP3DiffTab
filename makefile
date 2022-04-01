CC=gcc
CFLAGS= -Wall -ansi -W -pedantic -std=c99

program.exe : main.o tableau.o ListeChaine.o abreBinaire.o
	$(CC) -o program.exe main.o tableau.o ListeChaine.o arbreBinaire.o

main.o : main.c
	$(CC) $(CFLAGS) -c main.c

tableau.o : tableau.c tableau.h
	$(CC) $(CFLAGS) -c tableau.c

ListeChaine.o : ListeChaine.c ListeChaine.h
	$(CC) $(CFLAGS) -c ListeChaine.c

ListeChaine.o : arbreBinaire.c arbreBinaire.h
	$(CC) $(CFLAGS) -c arbreBinaire.c

clean :
	rm -rf *.o