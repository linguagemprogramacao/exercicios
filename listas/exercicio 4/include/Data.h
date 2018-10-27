#ifndef Data_H
#define Data_H

#include <chrono>
#include <iostream>

typedef std::chrono::system_clock Clock;

using namespace std;

class Data {

private:
	int dia;
	int mes;
	int ano;


public:
	Data();
	Data(int dia, int mes, int ano);

	bool validaData(int dia, int mes, int ano);
	void somarAnos(int quantidade);
	void somarMeses(int quantidade);
	void somarDias(int quantidade);
	int qntDiasMes(int mes, int ano);
	friend ostream& operator<< (ostream &o, Data const Data);


};

#endif