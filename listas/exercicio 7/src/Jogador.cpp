#include <Jogador.h>


/**
* @file Agenda.cpp
* @brief Classe que representa um jogador do bingo
* @author Jerffeson
*/

Jogador::Jogador() {
	
}

/**
* @brief inicia o jogador e suas cartelas
* @param nome : String - nome do jogador
* @param qntCartelas : quantidade de cartelas do jogador
*/
Jogador::Jogador(string nome, int qntCartelas) {
	this->nome = nome;
	this->qntCartelas = qntCartelas;

	for (int i = 0; i < qntCartelas; i++) {
		Cartela c;
		cartelas[i] = c;
	}

}

/**
* @brief Marca as cartelas do jogador com o valor passado por parametro
* @param valor : int - Valor a ser marcado na cartela
*/
void Jogador::marcarCartela(int valor) {

	for (int i = 0; i < this->qntCartelas; i++) {
		cartelas[i].marcarCartela(valor);
	}

}

/**
* @bief Verificar se o jogador tem alguma cartela completa e a imprime no console
* @return true - Se o jogador tiver alguma cartela completa <br /> false - se a cartela não tiver completa
*/
bool Jogador::verificarCartela() {
	cout << "\nJogador: " << this->nome << ": "<< endl;
	for (int i = 0; i < this->qntCartelas; i++) {
		cout << "Cartela [" << i+1 << "] tem: " << cartelas[i].getQntValoresSorteados() << " marcados" << endl;
		if(cartelas[i].getQntValoresSorteados() >= 15){
			cout << "\n\nCartela Ganhadora:\n" << cartelas[i] << endl;
			return true;
		}
	}

	return false;
}

int Jogador::getQntCartelas() {
	return this->qntCartelas;
}


ostream& operator<< (ostream &o, Jogador const jogador) {
	cout << jogador.nome;
	return o;
}