PROG = exe
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = jogo.o jogador.o dado.o
$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
jogo.o :
	$(CC) $(CPPFLAGS) -c jogo.cpp
jogador.o :
	$(CC) $(CPPFLAGS) -c jogador.cpp
dado.o :
	$(CC) $(CPPFLAGS) -c dado.cpp
clean.ubu:
	rm -f core $(PROG) $(OBJS)
clean.win:
	del $(PROG) $(OBJS)