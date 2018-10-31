#ifndef CARTELA_H
#define CARTELA_H

#include <cstdlib>
#include <iostream>

using namespace std;

class Cartela {

	private:
		
		int valores[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int qntValoresSorteados = 0;
		void iniciarCartela();
		
	public:
		int getQntValoresSorteados();
		Cartela();
		void marcarCartela(int valor);
		friend ostream& operator<< (ostream &o, Cartela const cartela);
};


#endif