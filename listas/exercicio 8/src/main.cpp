#include "Tempo.h"

using namespace std; 

bool isValidTime(int, int, int); 
const char delim = ':'; 


int main (int argc, char const * argv []) {

	Tempo T;

	T.lerTempo();
	T.mostraTempo();
	
	return 0;

}
