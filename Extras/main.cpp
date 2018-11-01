#include "fila.h"
#include "No.h"

#include <iostream>



int main(int argc, char const *argv[])
{

	Fila<Node<int>> f(4);

	f.vazio();
	Node<int> n(10);
	f.enfileira(n);

	Node<int> n2(15);
	f.enfileira(n2);

	Node<int> n3(20);
	f.enfileira(n3);

	Node<int> n4(30);
	f.enfileira(n4);

	cout << "\nTentando add 40 na fila." << endl;
	Node<int> n5(40);
	f.enfileira(n2);

	cout << "\nLista vazia: " << f.vazio() << endl;
	cout << "Lista Cheia: " << f.cheio() << endl;


	cout << f.desenfileira().getValue() << endl;

	cout << f.desenfileira().getValue() << endl;

	cout << f.desenfileira().getValue() << endl;

	cout << f.desenfileira().getValue() << endl;

	cout << "\vLista vazia: " << f.vazio() << endl;
	cout << "Lista Cheia: " << f.cheio() << endl;

	
	//cout << f.desenfileira2().getValue();

	/* code */
	return 0;
}