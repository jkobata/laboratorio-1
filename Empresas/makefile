PROG = exe
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = main.o funcionario.o empresa.o
$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
funcionario.o : funcionario.h
	$(CC) $(CPPFLAGS) -c funcionario.cpp
main.o :
	$(CC) $(CPPFLAGS) -c main.cpp
empresa.o : empresa.h
	$(CC) $(CPPFLAGS) -c empresa.cpp
clean.ubu:
	rm -f core $(PROG) $(OBJS)
clean.win:
	del $(PROG) $(OBJS)