#include "fila.h"

#include <iostream>

#include <string>

int main(int argc, char const *argv[])
{

	Fila<Node<string>> f(4);

	f.vazio();
	Node<string> n("Jerffeson");
	f.enfileira(n);

	Node<string> n2("André");
	f.enfileira(n2);

	Node<string> n3("Fernanda");
	f.enfileira(n3);

	Node<string> n4("Allan");
	f.enfileira(n4);

	Node<string> n5("Silvio");
	f.enfileira(n5);

	cout << "\nLista vazia: " << f.vazio() << endl;
	cout << "Lista Cheia: " << f.cheio() << endl << endl;

	cout << f.desenfileira().getValue() << endl;

	cout << f.desenfileira().getValue() << endl;

	cout << f.desenfileira().getValue() << endl << endl;

	Node<string> n6("Pedro");
	f.enfileira(n6);

	cout << f.desenfileira().getValue() << endl;

	cout << f.desenfileira().getValue() << endl;

	cout << "\vLista vazia: " << f.vazio() << endl;
	cout << "Lista Cheia: " << f.cheio() << endl;

	
	//cout << f.desenfileira2().getValue();

	/* code */
	return 0;
}