#Makefile for "lista" C++ application
#Created by Andre 17/05/2018

PROG = Prova
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o informacoes.o cd.o dvd.o livro.o acervo.o

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

informacoes.o: informacoes.hpp
	$(CC) $(CPPFLAGS) -c informacoes.cpp

cd.o: cd.hpp
	$(CC) $(CPPFLAGS) -c cd.cpp

dvd.o: dvd.hpp
	$(CC) $(CPPFLAGS) -c dvd.cpp

livro.o: livro.hpp
	$(CC) $(CPPFLAGS) -c livro.cpp

acervo.o: acervo.hpp
	$(CC) $(CPPFLAGS) -c acervo.cpp

clean:
	rm -f *.o
