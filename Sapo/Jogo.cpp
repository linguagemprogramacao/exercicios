
#include "Jogo.h"

int Jogo::distanciaTotalCorrida = 100;

int Jogo::getDistanciaTotalCorrida() {
	return distanciaTotalCorrida;
}

Jogo::Jogo() {

}

void Jogo::run() {

	int rodada = 1;
	bool fim = false;

	list<Sapo>::iterator itCorredores;

	while (!fim) {
		cout << "\n ******************* Rodada " << rodada << " ******************* \n";
		itCorredores = corredores.begin();

		for(;itCorredores!=corredores.end(); itCorredores++) {

			(*itCorredores).pular();

			if((*itCorredores).getDistanciaPercorrida() >= Jogo::getDistanciaTotalCorrida()) {
				fim = true;
				(*itCorredores).toString();
				break;
			}
		}
		rodada++;
	}

}

void Jogo::addCorredor(Sapo corredor) {
	corredores.push_back(corredor);
	cout << endl << corredor.getIdentificador() << " entrou na corrida\n";
}

