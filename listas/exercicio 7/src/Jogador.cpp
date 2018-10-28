#include <Jogador.h>

Jogador::Jogador() {
	
}

Jogador::Jogador(string nome, int qntCartelas) {
	this->nome = nome;
	this->qntCartelas = qntCartelas;

	

	for (int i = 0; i < qntCartelas; i++) {
		Cartela c;
		cartelas[i] = c;
	}

}

void Jogador::marcarCartela(int valor) {

	for (int i = 0; i < this->qntCartelas; i++) {
		cartelas[i].marcarCartela(valor);

	}

}

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