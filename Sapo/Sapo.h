#ifndef SAPO_H
#define SAPO_H

#include <string>

using namespace std;

class Sapo {

private:
	string identificador;
	float distanciaPercorrida;
	int qtdPulosDados;
	int distanciaMaxPorSalto;

public:
	string getIdentificador();
	void setIdentificador(string identificador);

	float getDistanciaPercorrida();
	void setDistanciaPercorrida(float distanciaPercorrida);

	int getQtdPulosDados();
	void setQtdPulosDados(int qtdPulosDados);

	int getDistanciaMaxPorSalto();
	void setDistanciaMaxPorSalto(int distanciaMaxPorSalto);

	Sapo(string identificador, int distanciaMaxPorSalto);
	void pular();
	void toString();

};

#endif