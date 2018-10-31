#ifndef BINGO_H
#define BINGO_H

#include <iostream>
#include "Jogador.h"
#include "Sorteadora.h"

using namespace std;

class Bingo {

	private:
		
		Jogador jogadores[100];
		int qntJogadores = 0;
		Sorteadora sorteadora;
		
		
	public:
		
		Bingo();
		void addJogador(Jogador jogador);
		void jogar();
		bool verificarGanhador();
		
};


#endif