#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade, double altura) {

	this->nome = nome;
	this->idade = idade;
	this->altura = altura;

}

Pessoa::Pessoa() {

}

string& Pessoa::getNome() {
	return this->nome;
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}

int& Pessoa::getIdade() {
	return this->idade;
}

void Pessoa::setIdade(int idade) {
	this->idade = idade;
}

double& Pessoa::getAltura() {
	return this->altura;
}

void Pessoa::setAltura(double altura) {
	this->altura = altura;
}

ostream& operator<< (ostream &o, Pessoa const pessoa) {

	o <<pessoa.nome << endl;

	return o;
}