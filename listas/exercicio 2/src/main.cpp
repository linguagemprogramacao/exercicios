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

			case '2':{

				

				agenda.removeContato("Jerff");
				}
				break;

			case '3': {

				string nomeContato="";
				cout<< "Digite o nome do contato que deseja buscar: ";
				cin >> nomeContato;

				int indiceContato = agenda.buscaContato(nomeContato);
				
				if(indiceContato != -1) {
					cout << "Contato: " << agenda.getContato(indiceContato);
				} else {
					cout << "Contato não existe.";
				}

				}
				break;

			case '4':
				agenda.listaContato();
				break;

			case '5':
				agenda.listaContato();
				int indiceContato;
				cout << "Informe o indice do contato que deseja buscar: ";
				cin >> indiceContato;
				if(indiceContato >= 0 and indiceContato <= agenda.getTotalContatos()-1 ) {
					cout << agenda.getContato(indiceContato);
				} else {
					cout << "Indice invalido. Selecione um valor entre 0  e " 
					<< agenda.getTotalContatos()-1 << endl;
				}

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