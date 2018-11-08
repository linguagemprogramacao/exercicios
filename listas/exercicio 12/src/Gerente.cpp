#include "Gerente.h"


Gerente::Gerente(string matricula, double salario, string setor, string nome) {

	this->nome = nome;
	this->setor = setor;
	this->salario = salario;
	this->matricula = matricula;

}
	
string& Gerente::getSetor() {

	return this->setor;
}


void Gerente::setSetor(string setor) {

}
