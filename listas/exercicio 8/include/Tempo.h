#ifndef TEMPO_H
#define TEMPO_H

#include <iostream>
#include <iomanip>
#include <iostream> 
#include <string> 
#include <sstream> 
#include <iomanip>

using namespace std;

class Tempo {

	private :
		int hh, mm, ss;
	
	public :

		// Le os dados do tempo a partir da entrada padrao
		void lerTempo (void);

		// Retorna o tempo em segundos
		int converteEmSegundos (void);

		// Imprime o tempo no formato HH:MM:SS e o seu total em segundos
		void mostraTempo (void);

};

#endif