#include "Agenda.h"
#include <iostream>

using namespace std;

int main (int argc, char const * argv []) {

	Agenda agenda;

	bool sair = false;
	char opt;

	system("clear");

	while(!sair) {

		cout << "Opções: " << endl << 
			"(1) Inserir Contatos" << endl <<
			"(2) Remover Contatos" << endl <<
			"(3) Buscar Contato" << endl <<
			"(4) Listar Contatos" << endl <<
			"(5) Imprimir Contato" << endl <<
			"(6) - Sair" << endl;

		cin >>  opt;

		system("clear");
		switch(opt) {

			

			case '1': {

				string nome = "";
				int idade = 0;
				double altura = 0;

				cout << "Informe os dados do Contato: \n";
				cout << "Nome: ";

				cin.ignore(1, '\n');
				getline(cin, nome);

				cout << "Idade: ";

				cin >> idade;

				cout << "Altura: ";

				cin >> altura;

				agenda.insereContato(nome, idade, altura);
				}
				break;

			case '2':
				
				agenda.removeContato("Jerff");
				break;

			case '3':
				agenda.buscaContato("Jerff");
				break;

			case '4':
				agenda.listaContato();
				break;

			case '5':
				agenda.imprimeContato(0);
				break;

			case '6':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.\n\n";
		}
	}


	return 0;
}