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

OBJS = $(OBJ)/data.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/data.o: $(OBJ)/data.o $(INC)/Data.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Data.cpp -o $(OBJ)/data.o

$(OBJ)/main.o: $(SRC)/main.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*