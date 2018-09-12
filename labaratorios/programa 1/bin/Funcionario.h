#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {

private:
	std::string nome;
	float salario;

public:

	static int countFuncionarios;

	int getCountFuncionarios();

	std::string getNome();
	void setNome(std::string nome);

	float getSalario();
	void setSalario(float salario);

	Funcionario(std::string nome, float salario);
	

};


#endif