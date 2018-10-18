#include "Agenda.h"
#include <iostream>

using namespace std;

int main (int argc, char const * argv []) {

	Agenda agenda;
	agenda.insereContato("Jerff", 23, 1.66);
	agenda.insereContato("Sergio", 23, 1.66);
	agenda.insereContato("Rennon", 23, 1.66);
	agenda.insereContato("Lailson", 23, 1.66);
	agenda.insereContato("Fernanda", 23, 1.66);
	agenda.listaContato();

	return 0;
}