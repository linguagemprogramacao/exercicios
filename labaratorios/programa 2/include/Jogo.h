#ifndef JOGO_H
#define JOGO_H

#include "Jogador.h"

#include <list>

using namespace std;

class Jogo {

private:
	list<Jogador *> jogadores;

public:
	void run();
	void jogar();
	void addJogador();
	void listarJogadores();
	void limparJogadores();
	void reiniciar();
	bool continuar();
	void verificarCampeao();
};


#endif