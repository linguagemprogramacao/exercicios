#include <Sorteadora.h>

int Sorteadora::totalSorteados = 21;
/**
	Gera valores aleatorios de 1 a 6

	Retorno:
		int - Valor gerado;
*/
int Sorteadora::sortear() {

	int aux = (rand() % 99) + 1;

	for (int i = 0; i < totalSorteados; i++) {
		
		if(aux == valoresSorteados[i]) {
			aux = (rand() % 99) + 1;
			i = 0;
		}

	}

	valoresSorteados[totalSorteados] = aux;
	totalSorteados++;

	return aux;

}