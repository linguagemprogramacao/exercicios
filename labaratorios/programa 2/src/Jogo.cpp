#include "Jogo.h"
#include <iostream>

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
			"(5) Reinicar partida" << endl <<
			"(6) Sair" << endl;

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
				reiniciar();
				break;

			case '6':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.";
		}
	}

}


void Jogo::jogar() {

	if(this->jogadores.size() > 1) {

		list<Jogador *>::iterator itJogador;
		char opt;
		bool continuarJogo = true;
		do {
			cout << "\t\t** Pontuação alvo: " << Jogador::pontuacaoAlvo;
			listarJogadores();

			itJogador = this->jogadores.begin();

			for(;itJogador != this->jogadores.end(); itJogador++) {
				listarJogadores();
				if((*itJogador)->getStatus() == 1) { // Se o jogador não estiver ativo, pula a execução dele
					cout << "\n\nJogador da vez: " << (*itJogador)->getNome() << endl;
					cout << "\nOpções: " << endl << 
						"(1) Jogar Dado" << endl <<
						"(2) Parar de Jogar" << endl;

					cin >>  opt;


					switch(opt) {

						case '1':
							(*itJogador)->jogarDados();
							(*itJogador)->atualizarStatus();
							break;

						case '2':
							(*itJogador)->setStatus(2);
							break;

						default:
							cout<< "Opção invalida.";
					}
				}

				continuarJogo = continuar();
				if(!continuarJogo) {
					break;	
				}
				
			}

		} while(continuarJogo);
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
				 "\nStatus: " << (*itJogador)->getStatusString() << endl;
		}


	} else {
		cout << "\nO jogo não tem nenhum jogador.\n\n";
	}

	

}

void Jogo::limparJogadores() {
	this->jogadores.clear();
}


void Jogo::reiniciar() {
	list<Jogador *>::iterator itJogador = this->jogadores.begin();

		for(;itJogador != this->jogadores.end(); itJogador++) {
			(*itJogador)->setPontuacao(0);
			(*itJogador)->setStatus(1);

		}
}


bool Jogo::continuar() {

	int coutJogadoresNaoExcluidos = 0;
	//list<Jogador *> jogadoresNaoExcluidos = this->jogadores;

	list<Jogador *>::iterator itJogador = this->jogadores.begin();

	// Verifica se alguem ganhou o jogo
	for(;itJogador != this->jogadores.end(); itJogador++) {
		if ((*itJogador)->getStatus() == 4) {
			cout << "\n\nJogo acabou\n" << "********* " << (*itJogador)->getNome() << " é o campeao *******\n";
			return false;
		}
	}

	
	itJogador = this->jogadores.begin();

	// Verifica se ainda existe, e quantos, jogadores não excluidos para jogar
	for(;itJogador != this->jogadores.end(); itJogador++) {
		if ((*itJogador)->getStatus() == 3) {
			coutJogadoresNaoExcluidos++;
		}
	}

	if((this->jogadores.size() - coutJogadoresNaoExcluidos) <= 1) {
		cout << "\n\nJogo acabou. Todos os jogadores foram excluidos\n";
		verificarCampeao();
		return false;
	}	


	// Verifica se os jogadores pararam
	itJogador = this->jogadores.begin();

	for(;itJogador != this->jogadores.end(); itJogador++) {
		if ((*itJogador)->getStatus() != 3) {
			if ((*itJogador)->getStatus() == 1) {
				return true; // Se existe algum jogador ativo, então o jogo continua. 
			}
	 	}
	}

	// Se chegou aqui, significa que o jogo acabou devido a todos os jogadores desistirem
	verificarCampeao();

	return false;	

}


void Jogo::verificarCampeao () {

	int maiorPontuacao = 0;

	list<Jogador *>::iterator itJogador = this->jogadores.begin();


	// Pega a maior pontuação dos jogadores não excluidos
	for(;itJogador != this->jogadores.end(); itJogador++) {
		if ((*itJogador)->getStatus() != 3) { // Evita verificar jogadores excluidos
			if ((*itJogador)->getPontuacao() > maiorPontuacao) {
				maiorPontuacao = (*itJogador)->getPontuacao();
			}
		}
	}


	itJogador = this->jogadores.begin();
	for(;itJogador != this->jogadores.end(); itJogador++) {
		if ((*itJogador)->getPontuacao() == maiorPontuacao) {
			(*itJogador)->setStatus(4);
		}
	}

	listarJogadores();
}