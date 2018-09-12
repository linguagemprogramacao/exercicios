#include "../bin/Funcionario.h"

int Funcionario::countFuncionarios = 0;

int Funcionario::getCountFuncionarios() {
	return Funcionario::countFuncionarios;
}

std::string Funcionario::getNome() {
	return this->nome;
}

void Funcionario::setNome(std::string nome) {
	this->nome = nome;
}

float Funcionario::getSalario() {
	return this->salario;
}

void Funcionario::setSalario(float salario) {
	this->salario = salario;
}

Funcionario::Funcionario(std::string nome, float salario) {
	this->nome = nome;
	this->salario = salario;
}