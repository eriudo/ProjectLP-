PROG = Prova
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o Midiateca.o CD.o Dvd.o Livro.o Dados.o

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

Midiateca.o: Midiateca.hpp
	$(CC) $(CPPFLAGS) -c Midiateca.cpp

CD.o: CD.hpp
	$(CC) $(CPPFLAGS) -c CD.cpp

Dvd.o: Dvd.hpp
	$(CC) $(CPPFLAGS) -c Dvd.cpp

Livro.o: Livro.hpp
	$(CC) $(CPPFLAGS) -c Livro.cpp

Dados.o: Dados.hpp
	$(CC) $(CPPFLAGS) -c Dados.cpp

clean:
	rm -f *.o