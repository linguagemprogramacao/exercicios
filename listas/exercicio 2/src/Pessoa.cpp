#include "Pessoa.h"

/**
* @file Pessoa.cpp
* @brief Classe que representa uma Pessoa(Contato) na agenda
* @author Jerffeson
*/

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

	o << "Nome: " << pessoa.nome << endl << "Idade: " << pessoa.idade << endl << "Altura: " << pessoa.altura << endl;

	return o;
}

/**
* @brief Sobrecarga necessario para a ação da linha 18 do arquivo Agencia.cpp
*/
Pessoa& Pessoa::operator=(const Pessoa &pessoa ){

	this->nome = pessoa.nome;
	this->idade = pessoa.idade;
	this->altura = pessoa.altura;

	return *this;

}