#ifndef JOGADOR_H
#define JOGADOR_H

#include "Cartela.h"
#include <string>
#include <iostream>

using namespace std;

class Jogador {

	private:
		string nome;
		Cartela cartelas[5];
		int qntCartelas = 0;

		
	public:
		int getQntCartelas();
		Jogador();
		Jogador(string nome, int qntCartelas);
		bool verificarCartela();
		void marcarCartela(int valor);
		friend ostream& operator<< (ostream &o, Jogador const Jogador);
};


#endif