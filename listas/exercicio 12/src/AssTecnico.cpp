#include "AssTecnico.h"


AssTecnico::AssTecnico() {

}

AssTecnico::AssTecnico(string matricula, double salario, double bonusSalarial, Funcionario supervisor, string nome) {

	this->nome = nome;
	this->bonusSalarial = bonusSalarial;
	this->salario = salario;
	this->matricula = matricula;
	this->supervisor = supervisor;

}
	
Funcionario& AssTecnico::getSupervisor() {
	return this->supervisor;
}

void AssTecnico::setSupervisor(Funcionario supervisor) {
	this->supervisor = supervisor;
}


double& AssTecnico::getBonusSalarial() {
	return this->bonusSalarial;
}

void AssTecnico::setBonusSalarial(double bonusSalarial) {
	this->bonusSalarial = bonusSalarial;
}

double AssTecnico::getSalario() {
	return this->salario + this->bonusSalarial;
}