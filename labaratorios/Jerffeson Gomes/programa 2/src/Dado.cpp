#include <Dado.h>

/**
	Gera valores aleatorios de 1 a 6

	Retorno:
		int - Valor gerado;
*/
int Dado::jogarDado() {

	return (rand() % 6) + 1;

}