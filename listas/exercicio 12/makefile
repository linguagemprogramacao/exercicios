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

OBJS = $(OBJ)/pessoa.o $(OBJ)/funcionario.o $(OBJ)/gerente.o $(OBJ)/oficina.o $(OBJ)/assTecnico.o $(OBJ)/assAdmin.o $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/pessoa.o: $(INC)/Pessoa.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Pessoa.cpp -o $(OBJ)/pessoa.o

$(OBJ)/funcionario.o: $(INC)/Funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Funcionario.cpp -o $(OBJ)/funcionario.o

$(OBJ)/gerente.o: $(INC)/Gerente.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Gerente.cpp -o $(OBJ)/gerente.o

$(OBJ)/assTecnico.o: $(INC)/AssTecnico.h
	$(CC) $(CPPFLAGS) -c $(SRC)/AssTecnico.cpp -o $(OBJ)/assTecnico.o

$(OBJ)/assAdmin.o: $(INC)/AssAdmin.h
	$(CC) $(CPPFLAGS) -c $(SRC)/AssAdmin.cpp -o $(OBJ)/assAdmin.o

$(OBJ)/oficina.o: $(INC)/Oficina.h
	$(CC) $(CPPFLAGS) -c $(SRC)/Oficina.cpp -o $(OBJ)/oficina.o

$(OBJ)/main.o: $(SRC)/main.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
