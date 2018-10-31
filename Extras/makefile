# Laboratório 1 - Programa 1 
# Linguagem de Programação 1
#
# Jerffeson Gomes


CC = g++
PROG = ./programa1

OBJ = ./build
SRC = ./
BIN = ./bin
INC = ./

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp -o main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*