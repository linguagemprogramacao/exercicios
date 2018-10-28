# Laboratório 2
# Linguagem de Programação 1
#
# Jerffeson Gomes


CC = g++
PROG = $(BIN)/programa

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/sorteadora.o $(OBJ)/cartela.o $(OBJ)/jogador.o $(OBJ)/bingo.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/sorteadora.o: $(OBJ)/sorteadora.o $(INC)/Sorteadora.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Sorteadora.cpp -o $(OBJ)/sorteadora.o

$(OBJ)/cartela.o: $(OBJ)/cartela.o $(INC)/Cartela.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Cartela.cpp -o $(OBJ)/cartela.o

$(OBJ)/jogador.o: $(OBJ)/jogador.o $(INC)/Jogador.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Jogador.cpp -o $(OBJ)/jogador.o

$(OBJ)/bingo.o: $(OBJ)/bingo.o $(INC)/Bingo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Bingo.cpp -o $(OBJ)/bingo.o

$(OBJ)/main.o: $(SRC)/main.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
