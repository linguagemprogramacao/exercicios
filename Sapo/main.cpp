#include "Jogo.h"



int main(int argc, char const *argv[])
{
	
	Sapo joao("João", 10);
	Sapo marcos("Marcos", 10);
	Sapo pedro("Pedro", 10);

	Jogo jogo;

	jogo.addCorredor(joao);
	jogo.addCorredor(marcos);
	jogo.addCorredor(pedro);


	jogo.run();

	return 0;
}