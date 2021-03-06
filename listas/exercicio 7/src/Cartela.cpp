#include <Cartela.h>
#include <cstdlib>

/**
* @file Agenda.cpp
* @brief Classe que representa uma cartela do bingo
* @author Jerffeson
*/

/**
* @brief Inicia uma cartela
*/
Cartela::Cartela() {

	iniciarCartela();

}

/**
* @brief Marca na cartela o valor recebido como parametro, caso exista
*/
void Cartela::marcarCartela(int valor) {

	for (int j = 0; j < 15; j++) {
		if (valor == valores[j]) {
			qntValoresSorteados++;
			j = 15;
		}
	}

}

/**
* @bief Inicia os valores da cartela
*/
void Cartela::iniciarCartela() {

	for (int i = 0; i < 15; i++) {
		
		int aux = (rand() % 99) + 1;

		for (int j = 0; j < 15; j++) {

			if(aux == valores[j]) {
				aux = (rand() % 99) + 1;
				j = 0;
			}

		}
		
		valores[i] = aux;
	}

}

int Cartela::getQntValoresSorteados() {
	return qntValoresSorteados;
}

ostream& operator<< (ostream &o, Cartela const cartela) {

	for (int j = 0; j < 15; j++) {

		cout << "\t" << "[" << j << "]"<< cartela.valores[j] << endl;

	}


	return o;
}