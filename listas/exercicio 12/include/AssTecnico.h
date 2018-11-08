#ifndef ASSTECNICO_H
#define ASSTECNICO_H

#include <string>
#include <ostream>

#include "Funcionario.h"

using namespace std;

class AssTecnico : public Funcionario {

private:
	Funcionario supervisor;
	double bonusSalarial;

public:
	AssTecnico();
	AssTecnico(string matricula, double salario, double bonusSalarial, Funcionario supervisor, string nome);
	
	Funcionario& getSupervisor();
	void setSupervisor(Funcionario supervisor);

	double& getBonusSalarial();
	void setBonusSalarial(double bonusSalarial);

	double getSalario();

};

#endif