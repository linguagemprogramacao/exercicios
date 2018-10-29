#include "Biblioteca.h"

/**
* @brief Inicializa a biblioteca com 8 livros
* @details Livros: A Culpa é das Estrelas;
<br />O Ladrão de Raios (Vol. 1); <br />A Batalha do Apocalipse; <br />Harry Potter e a Pedra Filosofal;
<br />O Desafio De Ferro; <br />Jogos Vorazes (Vol. 1); <br />Divergente; <br />O Código da Vinci;
*/
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

/**
* @brief Busca um livro pelo nome (ou uma parte do nome) e imprime no console
* @param nome : String - nome do livro a ser buscado
*/
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

/**
* @brief Busca um livro pelo ISBN (ou uma parte do dele) e imprime no console
* @param isbn : String - ISBN do livro a ser buscado
*/
void Biblioteca::buscarLivroISBN(string isbn) {

	unsigned int aux = isbn.length();
	bool encontrado = false;
	
	if(aux == 1) { // impedi substr(0, 0)
		aux = 2;
	}
	
	for(int i = 0; i < totalLivros; i++) {
		
		if(aux >= livros[i].getISBN().length()) {
			if(isbn.compare(livros[i].getISBN()) == 0) {
				cout << "Livro encontrado: " << livros[i] << endl;
				encontrado = true;
			}
		} else if (isbn.substr(0, aux-1).compare(livros[i].getISBN().substr(0, aux-1)) == 0) {
			
			cout << "Livro encontrado: " << livros[i] << endl;
			encontrado = true;

		}
		
	}
	if(!encontrado) {
		cout << "Livro não encontrado" << endl;
	}

}

/**
* @brief Verifica se um livro existe, se existe imprime no console
* @param nome : String - Nome do livro a ser buscado
*/
void Biblioteca::verificarExiste(string nome) {
	buscarLivroNome(string nome);
}

/**
* @brief Lista todos os livros 
*/
void Biblioteca::listarLivros() {
	for(int i = 0; i < totalLivros; i++) {
		cout << "Indice ["<< i <<"] encontrado: " << livros[i] << endl;
	}
}

/**
* @brief Imprime o livro comforme o indice informado, exibindo a quantidade de exemplares disponiveis
*/
void Biblioteca::verificarQuantidade(int i) {

	if (i < 0 or i > totalLivros) {
		cout << "Valor Invalido." << endl;
	} else {
		out << "Livro encontrado: " << livros[i] << endl;
	}

}
