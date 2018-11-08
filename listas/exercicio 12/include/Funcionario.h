#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <ostream>

#include "Pessoa.h"

using namespace std;

class Funcionario : public Pessoa {

protected:
	string matricula;
	double salario;


public:
	Funcionario();
	Funcionario(string matricula, double salario, string nome);
	
	string& getMatricula();
	void setMatricula(string matricula);

	double& getSalario();
	void setSalario(double salario);


};

#endif