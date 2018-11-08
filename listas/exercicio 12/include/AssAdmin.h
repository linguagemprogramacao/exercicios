#ifndef ASSADMIN_H
#define ASSADMIN_H

#include <string>
#include <ostream>

#include "Funcionario.h"

using namespace std;

class AssAdmin : public Funcionario {

private:
	string turno;
	double participacao;
	double faturamento;

public:
	AssAdmin();
	AssAdmin(string matricula, double salario, double participacao, double faturamento, string turno, string nome);
	
	string& getTurno();
	void setTurno(string turno);

	double& getParticipacao();
	void setParticipacao(double participacao);

	double& getFaturamento();
	void setFaturamento(double faturamento);

	double getSalario();

};

#endif