#include "../include/Funcionario.h"

int Funcionario::countFuncionarios = 0;

int Funcionario::getCountFuncionarios() {
	return Funcionario::countFuncionarios;
}

string Funcionario::getNome() {
	return this->nome;
}

void Funcionario::setNome(string nome) {
	this->nome = nome;
}

float Funcionario::getSalario() {
	return this->salario;
}

void Funcionario::setSalario(float salario) {
	this->salario = salario;
}

Funcionario::Funcionario() {
	this->nome = "";
	this->salario = 0;
	countFuncionarios++;
}

istream& operator>> (istream &i, Funcionario &funcionario) {
	
	i.ignore(1, '\n');
	getline(i, funcionario.nome);

	i >> funcionario.salario;
	return i;
}

ostream& operator<< (ostream &o, Funcionario const &funcionario) {
	
	o << "\nNome: " << funcionario.nome << endl << "Salario: " << funcionario.salario;

	return o;
}