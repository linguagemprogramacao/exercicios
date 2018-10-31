#ifndef Livro_H
#define Livro_H

#include <string>
#include <iostream>

using namespace std;

class Livro {

private:
	string titulo;
	string autor;
	string edicao;
	string editora;
	int ano;
	string isbn;
	int qntExemplares;


public:
	Livro();
	Livro(string titulo, string autor, string edicao, string editora, int ano, string isbn, int qntExemplares);
	string& getTitulo();
	string& getISBN();
	friend ostream& operator<< (ostream &o, Livro const Livro);

};

#endif