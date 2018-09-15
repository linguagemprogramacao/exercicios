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

	static int countEmpresas;

	string getNome();
	void setNome(string nome);

	string getCNPJ();
	void setCNPJ(string CNPJ);

	list<Funcionario *>& getFuncionarios();
	void setFuncionarios(list<Funcionario *> funcionarios);

	void addFuncionario(Funcionario * funcionario);
	Empresa();
	Empresa(string nome, string CNPJ);

	bool operator==(Empresa &empresa) const;
};

#endif