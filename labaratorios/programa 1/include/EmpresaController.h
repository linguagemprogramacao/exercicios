#ifndef EMPRESACONTROLLER_H
#define EMPRESACONTROLLER_H

#include <string>
#include <list>
#include <iostream>


#include "../include/Funcionario.h"
#include "../include/Empresa.h"


class EmpresaController {

private:
	Empresa empresa;

public:
	void criarEmpresa();
	void addFuncionario();
	void listarFuncionario();
	bool existeFuncionario(Funcionario * funcionario);
	void run();
};


#endif