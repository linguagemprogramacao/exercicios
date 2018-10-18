#include <Jogador.h>
#include <Dado.h>
#include <iostream>

int Jogador::pontuacaoAlvo = 21; // Pontuação alvo que os jogadores devem atingir

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

int Jogador::getStatus(){
	return this->status;
} 

/**
	Retorno o status do jogador de forma descritiva
	Retorno:
		1 - Ativo;
		2 - Parou de jogar;
		3 - Excluido;
		4 - Campeão
*/
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

// Simula a jogada de dois dados
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

// Atualiza o status do jogador ao jogar um dado
void Jogador::atualizarStatus() {
	if(getPontuacao() > Jogador::pontuacaoAlvo) {
		setStatus(3);
	} else if (getPontuacao() == Jogador::pontuacaoAlvo) {
		setStatus(4);
	}
}
