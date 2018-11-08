#include "Pessoa.h"

string& Pessoa::getNome() {
	return this->nome;
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}