#include <Jogador.h>


string& Jogador::getNome() {
	return this->nome;
}

void Jogador::setNome(string nome) {
	this->nome = nome;
}

int& Jogador::getPontuacao() {
	return this->pontuacao = pontuacao;
}

void Jogador::setPontuacao(int pontuacao) {
	pontuacao += pontuacao;
}

// 1 - Ativo; 2 - Parou de jogar; 3 - Excluido;
string Jogador::getStatus(){
	if(status == 1) {
		return "Ativo";
	} else if (status == 2){
		return "Parou de jogar";
	} else {
		return "Excluido";
	}
} 

void Jogador::setStatus(int status) {
	this->status = status;
}

Jogador::Jogador(string nome) {
	this->nome = nome;
	this->pontuacao = 0;
	this->status = 1;
}


