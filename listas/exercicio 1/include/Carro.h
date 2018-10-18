#ifndef CARRO_H
#define CARRO_H

#include <string>

using namespace std;

class Carro {

private:
	string modelo;
	int ano;
	double capacidadeMax;
	double autonomia;
	double capacidadeAtual;
	double distanciaPercorrida;


public:
	Carro(string modelo, int ano, double capacidadeMax, double autonomia);
	void mover(double distancia);
	void abastecer(double quantidade);
	double getQtdeCombustivel();
	double getAutonomia();
	double getDistanciaPercorrida();

};

#endif