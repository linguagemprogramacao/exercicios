#include "Livro.h"

Livro::Livro() {

}

Livro::Livro(string titulo, string autor, string edicao, string editora, int ano, string isbn, int qntExemplares) {
	this->titulo = titulo;
	this->autor = autor;
	this->edicao = edicao;
	this->editora = editora;
	this->ano = ano;
	this->isbn = isbn;
	this->qntExemplares = qntExemplares;
}

string& Livro::getTitulo() {
	return this->titulo;
}

string& Livro::getISBN() {
	return this->isbn;
}


ostream& operator<< (ostream &o, Livro const livro) {

	cout << "\n\tTítulo: " << livro.titulo << "\n\tAutor: " << livro.autor 
	<< "\n\tEdição: " << livro.edicao << "\n\tEditora: " << livro.editora 
	<< "\n\tAno: " << livro.ano << "\n\tISBN: " << livro.isbn 
	<< "\n\tQuantidade disponível: " << livro.qntExemplares;
	
	return o;
}
