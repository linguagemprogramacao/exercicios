#include "Funcionario.h"

Funcionario::Funcionario() {

}

Funcionario::Funcionario(string matricula, double salario, string nome) {

	this->nome = nome;
	this->salario = salario;
	this->matricula = matricula;

}
	
string& Funcionario::getMatricula() {

	return this->matricula;
}


void Funcionario::setMatricula(string matricula) {

}


double& Funcionario::getSalario() {

	return this->salario;
}


void Funcionario::setSalario(double salario) {


}
