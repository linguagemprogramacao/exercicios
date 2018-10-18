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

OBJS = $(OBJ)/carro.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/carro.o: $(INC)/Carro.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Carro.cpp -o $(OBJ)/carro.o


$(OBJ)/main.o: $(SRC)/main.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*