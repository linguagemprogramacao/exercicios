#include "AssAdmin.h"


AssAdmin::AssAdmin() {

}

AssAdmin::AssAdmin(string matricula, double salario, double participacao, double faturamento, string turno, string nome) {

	this->nome = nome;
	this->participacao = participacao;
	this->salario = salario;
	this->matricula = matricula;
	this->turno = turno;
	this->faturamento = faturamento;

}
	
string& AssAdmin::getTurno() {
	return this->turno;
}

void AssAdmin::setTurno(string turno) {
	this->turno = turno;
}

double& AssAdmin::getParticipacao() {
	return this->participacao;
}

void AssAdmin::setParticipacao(double participacao) {
	this->participacao = participacao;
}

double AssAdmin::getSalario() {
	return this->salario + (this->faturamento * (this->participacao/100));
}

double& AssAdmin::getFaturamento() {
	return this->faturamento;
}


void AssAdmin::setFaturamento(double faturamento) {
	this->faturamento = faturamento;
}