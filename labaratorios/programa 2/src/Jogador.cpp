#include <Jogador.h>
#include <Dado.h>
#include <iostream>

int Jogador::pontuacaoAlvo = 21;

string& Jogador::getNome() {
	return this->nome;
}

void Jogador::setNome(string nome) {
	this->nome = nome;
}

int& Jogador::getPontuacao() {
	return this->pontuacao;
}

void Jogador::addPontuacao(int pontuacao) {
	this->pontuacao += pontuacao;
}

void Jogador::setPontuacao(int pontuacao) {
	this->pontuacao = pontuacao;
}

// 1 - Ativo; 2 - Parou de jogar; 3 - Excluido;
int Jogador::getStatus(){
	return this->status;
} 

// 1 - Ativo; 2 - Parou de jogar; 3 - Excluido;
string Jogador::getStatusString(){
	if(status == 1) {
		return "Ativo";
	} else if (status == 2){
		return "Parou de jogar";
	} else if (status == 4){
		return "Campeão";
	} else {
		return "Excluido";
	}
} 

void Jogador::setStatus(int status) {
	this->status = status;
}

void Jogador::jogarDados() {

	Dado dado;
	int valorDado = 0;
	valorDado = dado.jogarDado();
	cout << "Dado 1: " << valorDado;

	this->addPontuacao(valorDado);

	valorDado = dado.jogarDado();
	cout << "\nDado 2: " << valorDado << endl;

	this->addPontuacao(valorDado);

}

Jogador::Jogador(string nome) {
	this->nome = nome;
	this->pontuacao = 0;
	this->status = 1;
}

void Jogador::atualizarStatus() {
	if(getPontuacao() > Jogador::pontuacaoAlvo) {
		setStatus(3);
	} else if (getPontuacao() == Jogador::pontuacaoAlvo) {
		setStatus(4);
	}
}
