#ifndef JOGO_H
#define JOGO_H

#include "Sapo.h"
#include <list>
#include <iostream>

using namespace std;

class Jogo {

private:
	list<Sapo> corredores;

public:
	static int distanciaTotalCorrida;
	void run();
	Jogo();
	void addCorredor(Sapo corredor);
	int getDistanciaTotalCorrida();
	
};

#endif