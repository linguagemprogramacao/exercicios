#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <list>

#include "../include/Funcionario.h"

using namespace std;

class Empresa {

private:
	
	string nome;
	string CNPJ;
	

public:

	list<Funcionario *> funcionarios;

	string getNome();
	void setNome(string nome);

	string getCNPJ();
	void setCNPJ(string CNPJ);

	list<Funcionario *>& getFuncionarios();
	void setFuncionarios(list<Funcionario *> funcionarios);

	void addFuncionario(Funcionario * funcionario);
	Empresa();
};

#endif