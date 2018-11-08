#ifndef Oficina_H
#define Oficina_H

#include <string>
#include <ostream>

#include "Funcionario.h"
#include <vector>

using namespace std;

class Oficina {

private:
	vector<Funcionario> funcionarios;
	double faturamento;


public:
	Oficina();
	Oficina(double faturamento);
	
	vector<Funcionario>& getFuncionarios();

};

#endif