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
	static int pontuacaoAlvo;

	int& getPontuacao();
	void setPontuacao(int pontuacao);
	void addPontuacao(int pontuacao);

	int getStatus();
	string getStatusString(); // 1 - Ativo; 2 - Parou de jogar; 3 - Excluido;
	void setStatus(int status);

	void jogarDados();
	void atualizarStatus();
	Jogador(string nome);
};


#endif