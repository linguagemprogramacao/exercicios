#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <iostream>
#include <ostream>
#include <algorithm> // Transformar string em minuscula

using namespace std;

class Funcionario {

private:
	string nome;
	float salario;

public:

	static int countFuncionarios;

	int getCountFuncionarios(); // numero total de funcionarios cadastrados no sistema

	string& getNome();
	void setNome(string nome);

	float& getSalario();
	void setSalario(float salario);

	Funcionario();
	Funcionario(string nome, float salario);
	
	friend istream& operator>> (std::istream &i, Funcionario * funcionario);
	friend ostream& operator<< (ostream &o, Funcionario * const funcionario);
	bool operator==(Funcionario &funcionaro) const;

};


#endif