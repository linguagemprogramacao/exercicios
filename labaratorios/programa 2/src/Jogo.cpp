#include "Jogo.h"

#include <iostream>

int Jogo::pontuacaoAlvo = 21;

void Jogo::run() {

	bool sair = false;
	char opt;

	//system("clear");
	while(!sair) {

		cout << "\nOpções: " << endl << 
			"(1) Iniciar Jogor" << endl <<
			"(2) Adicionar Jogadores" << endl <<
			"(3) Listar Jogadores" << endl <<
			"(4) Limpar lista de jogadores" << endl <<
			"(5) Sair" << endl;

		cin >>  opt;

		//system("clear");
		switch(opt) {

			case '1':
				jogar();
				break;

			case '2':
				addJogador();
				break;

			case '3':
				listarJogadores();
				break;

			case '4':
				limparJogadores();
				break;

			case '5':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.";
		}
	}

}


void Jogo::jogar() {

	if(this->jogadores.size() > 0) {




	} else {
		cout << "\nÉ necessário pelo menos 2 jogadores para jogar.\n\n";
	}

}


void Jogo::addJogador() {

	string nome;
	cout << "\nDigite o nome do jogador: ";
	cin >> nome;

	Jogador * jogador = new Jogador(nome);

	this->jogadores.push_back(jogador);

	cout << "\nJogador adicionado ao jogo.";

}

void Jogo::listarJogadores() {


	if(this->jogadores.size() > 0) {

		cout << "\nLista de jogadores: \n";

		list<Jogador *>::iterator itJogador = this->jogadores.begin();

		for(;itJogador != this->jogadores.end(); itJogador++) {
			cout << "\nJogador: " << (*itJogador)->getNome() <<
				 "\nPontuacao: " << (*itJogador)->getPontuacao() <<
				 "\nStatus: " << (*itJogador)->getStatus() << endl;
		}


	} else {
		cout << "\nO jogo não tem nenhum jogador.\n\n";
	}

	

}

void Jogo::limparJogadores() {
	this->jogadores.clear();
}