#include "fila.h"
#include "No.h"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	Fila<Node<int>> f(10);

	f.vazio();
	Node<int> n(10);
	f.enfileira(n);

	Node<int> n2(15);
	f.enfileira(n2);

	Node<int> n3(15);
	f.enfileira(n3);

	Node<int> n4(15);
	f.enfileira(n4);

	cout << f.desenfileira().getValue();
	//cout << f.desenfileira2().getValue();

	/* code */
	return 0;
}