#include "Bingo.h"
#include <iostream>

/**
* @sa https://github.com/linguagemprogramacao/exercicios
*/

using namespace std;

int main (int argc, char const * argv []) {

	bool sair = false;
	char opt;

	Bingo bingo;

	system("clear");

	while(!sair) {

		cout << "Opções: " << endl << 
			"(1) Inserir Jogador" << endl <<
			"(2) Iniciar Partida" << endl <<
			"(3) - Sair" << endl;

		cin >>  opt;

		system("clear");
		switch(opt) {

			

			case '1': {

				string nome;
				cout << "Digite o nome do Jogador: ";
				
				cin.ignore(1, '\n');
				getline(cin, nome);

				int qntCartelas = 0;

				cout << "Com quantas cartelas deseja jogar (1 a 5)? ";

				cin >> qntCartelas;

			
				while (qntCartelas > 5 or qntCartelas < 1) {
					cout << "Valor invalido." << endl;
					cout << "Com quantas cartelas deseja jogar (1 a 5)? ";

					cin >> qntCartelas;
				}
				

				Jogador j(nome, qntCartelas);

				bingo.addJogador(j);
				

				}

				break;

			case '2':{

				bingo.jogar();
				sair = true;

				}
				break;

			case '3':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.\n\n";
		}
	}


	return 0;
}