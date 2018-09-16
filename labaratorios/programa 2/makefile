# Laboratório 1 - Programa 1 
# Linguagem de Programação 1
#
# Jerffeson Gomes


CC = g++
PROG = $(BIN)/programa2

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/jogador.o $(OBJ)/dado.o $(OBJ)/jogo.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/jogador.o: $(INC)/Jogador.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Jogador.cpp -o $(OBJ)/jogador.o

$(OBJ)/dado.o: $(INC)/Dado.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Dado.cpp -o $(OBJ)/dado.o

$(OBJ)/jogo.o: $(INC)/Jogo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Jogo.cpp -o $(OBJ)/jogo.o

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*