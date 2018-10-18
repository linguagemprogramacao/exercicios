# Laboratório 1 - Programa 1 
# Linguagem de Programação 1
#
# Jerffeson Gomes


CC = g++
PROG = $(BIN)/programa1

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/pessoa.o $(OBJ)/agenda.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/pessoa.o: $(INC)/Pessoa.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Pessoa.cpp -o $(OBJ)/pessoa.o

$(OBJ)/agenda.o: $(OBJ)/pessoa.o $(INC)/Agenda.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Agenda.cpp -o $(OBJ)/agenda.o

$(OBJ)/main.o: $(SRC)/main.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*