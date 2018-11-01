#ifndef LISTA_H_
#define LISTA_H_

#include "No.h"

template <typename T>
class Lista {
private:
    int m_total_elementos;
    T* inicio;
    T* final;

public:
	Lista();
	~Lista();
	void inserirNoFinal(T& no);
    T& removerDoInicio();
    T& removerDoFinal();
    bool vazio();
    int tamanho();

};

template<typename T>
Lista<T>::Lista(){
	this->m_total_elementos = 0;
	inicio = NULL;
	final = NULL;
}

template<typename T>
Lista<T>::~Lista() {
	delete inicio;
	delete final;
}

template<typename T>
void Lista<T>::inserirNoFinal(T& no) {

	if(m_total_elementos == 0) {

		inicio = &no;
		final = &no;
	
	} else if (m_total_elementos == 1){

		final = &no;
		inicio->setNext(final);

		final->setPrevious(inicio);

	} else {

		final->setNext(&no);
		no.setPrevious(final);
		final = &no;

	}

	m_total_elementos++;	

}

template<typename T>
int Lista<T>::tamanho() {
	return m_total_elementos;
}


template<typename T>
T& Lista<T>::removerDoInicio() {

	T* aux  = inicio;

	inicio = inicio->getNext();
	m_total_elementos--;	
	return (*aux);
}

template<typename T>
T& Lista<T>::removerDoFinal() {
	return (*final);
}

template<typename T>
bool Lista<T>::vazio() {
	return m_total_elementos == 0;
}

#endif /* defined(__LinkedList__LinkedList__) */
