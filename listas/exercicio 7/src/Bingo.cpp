#include "Bingo.h"

Bingo::Bingo() {

}

void Bingo::jogar() {
	int rodada = 1;
	while(!verificarGanhador()) {

		int valorSorteado = sorteadora.sortear();

		cout << endl << " ******************** Nova Rodada "<< rodada << "**************************** " << endl 
		<<" Valor sorteado: " << valorSorteado << endl;
		for (int i =0; i < this->qntJogadores; i++) {

			jogadores[i].marcarCartela(valorSorteado);

		}
		rodada++;
	}

}

void Bingo::addJogador(Jogador jogador) {

	jogadores[qntJogadores] = jogador;
	qntJogadores++;

}
	
bool Bingo::verificarGanhador() {
	bool aux = false;
	for (int i =0; i < this->qntJogadores; i++) {

		if(jogadores[i].verificarCartela()){

			cout << "Jogador Ganhador: " << jogadores[i] << endl << endl;

			aux = true;
		}
	}


	return aux;
}