#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

using namespace std;

class Jogador {

private:
	string nome;
	int pontuacao;
	int status;

public:
	string& getNome();
	void setNome(string nome);

	int& getPontuacao();
	void setPontuacao(int pontuacao);

	string getStatus(); // 1 - Ativo; 2 - Parou de jogar; 3 - Excluido;
	void setStatus(int status);

	Jogador(string nome);
};


#endif