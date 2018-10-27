#include "Data.h"


int main (int argc, char const * argv []) {

	Data d = Data();
	cout << "Data Atual: " << d;

	d.somarAnos(5);
	cout << "Data Atual acrescida 5 anos: " << d;

	d.somarMeses(15);
	cout << "Data "<< d <<" acrescida 15 meses: " << d;

	d.somarDias(1461);
	cout << "Data "<< d <<" acrescida 1461 dias (4A): " << d;

	
	cout << endl << endl;
	Data d2 = Data(29, 2, 2016);
	cout << "Data Informada: " << d2;

	d2.somarAnos(10);
	cout << "Data Informada acrescida 10 anos: " << d2;

	d2.somarMeses(7);
	cout << "Data "<< d2 <<"  acrescida 7 meses: " << d2;

	d2.somarDias(10793);
	cout << "Data "<< d2 <<" acrescida 10793 dias (29A 9M 3D): " << d2;

	return 0;
}