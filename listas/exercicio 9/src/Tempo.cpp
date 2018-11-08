#include "Tempo.h"

// Le os dados do tempo a partir da entrada padrao
void Tempo::lerTempo (void) {

	string in; 
	char c1, c2;
	stringstream s;

	cout << "Enter HH:MM:SS : ";


	getline(cin,in); 
		
	s.clear();
	s.str(in); 

	s >> hh >> c1 >> mm >> c2 >> ss;


}

// Retorna o tempo em segundos
int Tempo::converteEmSegundos(void) {
	return hh*60*60 + mm*60 + ss;
}

// Imprime o tempo no formato HH:MM:SS e o seu total em segundos
void Tempo::mostraTempo (void) {
	cout << "A hora informada convertida para segundos é igual a: " << converteEmSegundos() << endl;
}

istream& operator>> (istream &i, Tempo& tempo) {

	string in; 
	char c1, c2;
	stringstream s;

	cout << "Enter HH:MM:SS : ";

	getline(i,in); 
		
	s.clear();
	s.str(in); 

	s >> tempo.hh >> c1 >> tempo.mm >> c2 >> tempo.ss;

	return i;
}

ostream& operator<< (ostream &o, Tempo& tempo) {
	
	o << "A hora informada convertida para segundos é igual a: " << tempo.converteEmSegundos() << endl;

	return o;
}