#include "Sapo.h"

#include <cstdlib>
#include <iostream>

using namespace std;



string Sapo::getIdentificador() {
	return this->identificador;
}

void Sapo::setIdentificador(string identificador) {
	this->identificador = identificador;
}

float Sapo::getDistanciaPercorrida() {
	return this->distanciaPercorrida;
}

void Sapo::setDistanciaPercorrida(float distanciaPercorrida) {
	this->distanciaPercorrida = distanciaPercorrida;
}

int Sapo::getQtdPulosDados() {
	return this->qtdPulosDados;
}

void Sapo::setQtdPulosDados(int qtdPulosDados) {
	this->qtdPulosDados = qtdPulosDados;
}

int Sapo::getDistanciaMaxPorSalto() {
	return this->distanciaMaxPorSalto;
}
	
void Sapo::setDistanciaMaxPorSalto(int distanciaMaxPorSalto) {
	this->distanciaMaxPorSalto = distanciaMaxPorSalto;
}



Sapo::Sapo(string identificador, int distanciaMaxPorSalto) {
	this->identificador = identificador;
	this->distanciaMaxPorSalto = distanciaMaxPorSalto;
	this->distanciaPercorrida = 0;
	this->qtdPulosDados = 0;
}

void Sapo::pular() {


	float distanciaSalto = (rand() % distanciaMaxPorSalto) + 1;
	cout << endl << this->identificador << "(" << distanciaPercorrida << ")" << " - pulou " << distanciaSalto << " cmts";
	distanciaPercorrida = (distanciaPercorrida + distanciaSalto);
	qtdPulosDados++;

}

void Sapo::toString() {

	cout << "\n\nCorredor: " << this->identificador << endl << "Percorreu: " << this->distanciaPercorrida << " em " << qtdPulosDados << " pulos"<<endl;

}