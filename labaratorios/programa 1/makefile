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

OBJS = $(OBJ)/funcionario.o $(OBJ)/empresa.o $(OBJ)/empresaController.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/funcionario.o: $(INC)/Funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Funcionario.cpp -o $(OBJ)/funcionario.o

$(OBJ)/empresa.o: $(INC)/Empresa.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Empresa.cpp -o $(OBJ)/empresa.o

$(OBJ)/empresaController.o: $(INC)/EmpresaController.h
	$(CC) $(CPPFLAGS) -c $(SRC)/EmpresaController.cpp -o $(OBJ)/empresaController.o


$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*