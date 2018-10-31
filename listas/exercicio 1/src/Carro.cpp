/**
* @file Carro.cpp
* @brief Classe que representa um carro
* @author Jerffeson
*/

#include "Carro.h"


Carro::Carro(string modelo, int ano, double capacidadeMax, double autonomia) {

	this->modelo = modelo;
	this->ano = ano;
	this->capacidadeMax = capacidadeMax;
	this->autonomia = autonomia;
	distanciaPercorrida = 0;


}

/** 
* @brief Função que move o carro por uma derterminada distancia
* @param distancia : double - Distância que o carro tem que percorrer
*/
void Carro::mover(double distancia) {

	if(capacidadeAtual > 1) {
		double combustivelNecessario = distancia/autonomia;
		if ( combustivelNecessario <= (capacidadeAtual-1) ) { /*< verifica se há combustivel suficiente para fazer o percurso */
			distanciaPercorrida += distancia;
			capacidadeAtual -= combustivelNecessario; 
		}
	}
}

/**
* @brief Função que abastece o carro com X litros	
* @param quantidade : double - Quantidade de combustivel
*/
void Carro::abastecer(double quantidade) {

	if(quantidade > 0) {

		if(quantidade <= capacidadeMax and (capacidadeAtual + quantidade) <= capacidadeMax) {
			capacidadeAtual += quantidade;
		}
	}
}

double Carro::getQtdeCombustivel() {
	return capacidadeAtual;
}

/**
*	@brief Calcula a quantidade de KM possiveis com o combustivel atual 
*	@return Quantos KM são possiveis com o combustivel atual 
*/
double Carro::getAutonomia() {
	return (capacidadeAtual-1)*autonomia;
}

double Carro::getDistanciaPercorrida() {
	return distanciaPercorrida;
}