#include "Biblioteca.h"
#include <iostream>

using namespace std;

int main (int argc, char const * argv []) {

	Biblioteca biblioteca;
	string nome;
	string isbn;

	bool sair = false;
	char opt;

	system("clear");

	while(!sair) {

		cout << "Opções: " << endl << 
			"(1) Buscar Livro (Nome)" << endl <<
			"(2) Buscar Livro (ISBN)" << endl <<
			"(3) Verificar Se Existe" << endl <<
			"(4) Verificar Quantdade" << endl <<
			"(5) - Sair" << endl;

		cin >>  opt;

		system("clear");
		switch(opt) {

			

			case '1': {

				cout << "Digite o nome do livro: ";
				
				cin.ignore(1, '\n');
				getline(cin, nome);

				if (nome.length() > 0) {
					biblioteca.buscarLivroNome(nome);
				} else {
					cout << "Valor invalido." << endl;
				}
				
					
				}
				break;

			case '2':{

				cout << "Digite o ISBN do livro (COM OS -): ";
				
				cin.ignore(1, '\n');
				getline(cin, isbn);

				if (isbn.length() > 0) {
					biblioteca.buscarLivroISBN(isbn);
				} else {
					cout << "Valor invalido." << endl;
				}


				}
				break;

			case '3': {

				cout << "Nome do livro que deseja verificar: ";
				
				cin.ignore(1, '\n');
				getline(cin, nome);

				if (nome.length() > 0) {
					biblioteca.buscarLivroNome(nome);
				} else {
					cout << "Valor invalido." << endl;
				}
		

				}
				break;

			case '4':

				cout << "Nome do livro que deseja verificar: ";
				
				cin.ignore(1, '\n');
				getline(cin, nome);

				if (nome.length() > 0) {
					biblioteca.buscarLivroNome(nome);
				} else {
					cout << "Valor invalido." << endl;
				}

				
				break;

			case '5':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.\n\n";
		}
	}


	return 0;
}