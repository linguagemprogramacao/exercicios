#include "Biblioteca.h"

Biblioteca::Biblioteca() {

	Livro livro1("A Culpa é das Estrelas", "John Green", "1", "Intrínseca",	2012, "978-85-8057-226-1", 5);
	Livro livro2("O Ladrão de Raios (Vol. 1)", "Rick Riordan", "1", "Intrínseca", 2008, "978-85-9807-839-7", 1);
	Livro livro3("A Batalha do Apocalipse", "Eduardo Spohr", "1", "Verus Editora", 2010, "978-85-7686-076-1", 2);
	Livro livro4("Harry Potter e a Pedra Filosofal", "J. K. Rowling", "1", "Rocco", 2000, "85-3251-101-5", 10);
	Livro livro5("O Desafio De Ferro", "J Cassandra Clare, Holly Black", "1", "Irado", 2014, "978-85-8163-557-6", 3);
	Livro livro6("Jogos Vorazes (Vol. 1)", "Suzanne Collins", "1", "Rocco", 2010, "978-85-7980-024-5", 4);
	Livro livro7("Divergente", "Veronica Roth", "1", "Rocco", 2012, "978-85-7980-131-0", 2);
	Livro livro8("O Código da Vinci", "Dan Brown", "1", "	Arqueiro", 2016, "978-85-8041-625-1", 6);

	livros[0] = livro1;
	livros[1] = livro2;
	livros[2] = livro3;
	livros[3] = livro4;
	livros[4] = livro5;
	livros[5] = livro6;
	livros[6] = livro7;
	livros[7] = livro8;

	totalLivros = 7;

}

void Biblioteca::buscarLivroNome(string nome) {
	unsigned int aux = nome.length();
	bool encontrado = false;
	
	if(aux == 1) { // impedi substr(0, 0)
		aux = 2;
	}
	
	for(int i = 0; i < totalLivros; i++) {
		
		if(aux >= livros[i].getTitulo().length()) {
			if(nome.compare(livros[i].getTitulo()) == 0) {
				cout << "Livro encontrado: " << livros[i] << endl;
				encontrado = true;
			}
		} else if (nome.substr(0, aux-1).compare(livros[i].getTitulo().substr(0, aux-1)) == 0) {
			
			cout << "Livro encontrado: " << livros[i] << endl;
			encontrado = true;

		}
		
	}
	if(!encontrado) {
		cout << "Livro não encontrado" << endl;
	}
	
}

void Biblioteca::buscarLivroISBN(string isbn) {



}

void Biblioteca::verificarExiste(string nome) {

}

void Biblioteca::verificarQuantidade(int i) {

}
