//CRIAR UMA TAD FILA E DEPOIS TRANSFORMAR NUMA TAD FILA DE PRIORIDADE
#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <memory>
#include "lista.h"

using namespace std;

template <typename T>
class Fila{
	private:
		Lista<T> * m_elementos;
		//Não é necessário um atributo para o tamanho da Fila, pois já a Lista já possui esse elemento.
		int m_capacidade;

	public:
		
		Fila(int capacidade_);
		~Fila();

		void enfileira(T& novo_);
		T& desenfileira();
		bool vazio();
		bool cheio();
		int tamanho();

};

template<typename T>
Fila<T>::Fila(int capacidade_){
	m_elementos = new Lista<T>();
	m_capacidade = capacidade_;
}

template<typename T>
Fila<T>::~Fila(){
	delete m_elementos;	
}

template<typename T>
void Fila<T>::enfileira(T& novo_){
	if(tamanho() >= m_capacidade) {
		cout << endl << "\nTentando add "<< novo_.getValue() <<" na fila." << endl;
		cout << "Fila já chegou no seu limite." << endl;
	} else {
		this->m_elementos->inserirNoFinal(novo_);
		cout << novo_.getValue() << " foi adicionado com sucesso." << endl;
	}
	
}

template<typename T>
T& Fila<T>::desenfileira(){
	cout << "Chamando o pŕoximo da fila: " << endl;
	return this->m_elementos->removerDoInicio();	
	
}

template<typename T>
bool Fila<T>::vazio(){
	return this->m_elementos->vazio();
}

template<typename T>
bool Fila<T>::cheio(){
	return (this->m_elementos->tamanho() == m_capacidade);
}

template<typename T>
int Fila<T>::tamanho(){
	return this->m_elementos->tamanho();
}

#endif