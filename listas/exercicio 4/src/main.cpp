#include "Data.h"


/**
* @sa https://github.com/linguagemprogramacao/exercicios
*/


int main (int argc, char const * argv []) {

	Data d = Data();
	cout << "Data Atual: " << d << endl;

	d.somarAnos(5);
	cout << "Data Atual acrescida 5 anos: " << d << endl;

	cout << "Data " << d;
	d.somarMeses(15);
	cout << " acrescida 15 meses: " << d << endl;

	cout << "Data " << d;
	d.somarDias(1461);
	cout <<" acrescida 1461 dias (4A): " << d << endl;

	cout << "Data " << d;
	d.proximoDia();
	cout <<" Próximo dia: " << d << endl;

	
	cout << endl << endl;
	Data d2 = Data(29, 2, 2016);
	cout << "Data Informada: " << d2 << endl;

	d2.proximoDia();
	cout << "Data "<< d2 <<" Próximo dia: " << d2 << endl;

	cout << "Data "<< d2;
	d2.somarAnos(10);
	cout << " acrescida 10 anos: " << d2 << endl;

	cout << "Data "<< d2;
	d2.somarMeses(45);
	cout <<"  acrescida 45 meses: " << d2 << endl;

	cout << "Data "<< d2;
	d2.somarDias(10793);
	cout <<" acrescida 10793 dias (29A 9M 3D): " << d2 << endl;

	return 0;
}
