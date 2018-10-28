#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define MAX_LIVROS 100
#include <string>
#include <iostream>
#include "Livro.h"


using namespace std;

class Biblioteca {

	private:
	Livro livros[MAX_LIVROS];
	int totalLivros = 0;

	public :
		/* */
		Biblioteca();
		void buscarLivroNome(string nome);
		void buscarLivroISBN(string isbn);
		void verificarExiste(string nome);
		void verificarQuantidade(int i);
		

};

#endif