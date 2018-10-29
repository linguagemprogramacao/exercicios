#include <Sorteadora.h>

/**
* @file Agenda.cpp
* @brief Classe que representa a maquina sorteadora do bingo
* @author Jerffeson
*/

int Sorteadora::totalSorteados = 0;

/**
* @brief Gera valores aleatorios de 1 a 99
* @return int - Valor gerado;
*/
int Sorteadora::sortear() {

	int aux = (rand() % 99) + 1;

	for (int i = 0; i < totalSorteados; i++) {
		
		if(aux == valoresSorteados[i]) { // Caso o valor ja tenha sido gerado, gera um novo
			aux = (rand() % 99) + 1;
			i = 0;
		}

	}

	valoresSorteados[totalSorteados] = aux;
	totalSorteados++;

	return aux;

}