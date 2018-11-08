#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include <ostream>

#include "Funcionario.h"

using namespace std;

class Gerente : public Funcionario {

private:
	string setor;

public:
	Gerente(string matricula, double salario, string setor, string nome);
	
	string& getSetor();
	void setSetor(string matricula);



};

#endif