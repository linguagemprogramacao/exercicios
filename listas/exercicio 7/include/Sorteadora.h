#ifndef SORTEADORA_H
#define SORTEADORA_H

#include <cstdlib>

using namespace std;

class Sorteadora {

public:
	static int totalSorteados;
	int valoresSorteados[99];
	int sortear();
};


#endif