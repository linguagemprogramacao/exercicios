#include "Empresa.h"

int Empresa::countEmpresas = 0;

string Empresa::getNome() {
	return this->nome;
}

void Empresa::setNome(string nome) {
	this->nome = nome;
}

string Empresa::getCNPJ() {
	return this->CNPJ;
}

void Empresa::setCNPJ(string CNPJ) {
	this->CNPJ = CNPJ;
}

list<Funcionario * >& Empresa::getFuncionarios() {
	return this->funcionarios;
}

void Empresa::setFuncionarios(list<Funcionario * > funcionarios) {
	this->funcionarios = funcionarios;
}

void Empresa::addFuncionario(Funcionario * funcionario) {
	this->funcionarios.push_back(funcionario);
}

Empresa::Empresa() {
	this->nome = "";
	this->CNPJ = "";
}

Empresa::Empresa(string nome, string CNPJ) {
	this->nome = nome;
	this->CNPJ = CNPJ;
}

bool Empresa::operator== (Empresa &empresa) const{

	if(this->CNPJ.compare(empresa.getCNPJ()) == 0) { // Se os dois CNPJs são iguais, então é a mesma empresa
		return true;
	} else {
		return false;
	}

}



