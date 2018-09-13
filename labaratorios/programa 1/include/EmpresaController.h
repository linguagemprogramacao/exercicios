#ifndef EMPRESACONTROLLER_H
#define EMPRESACONTROLLER_H

#include <string>
#include <list>
#include <iostream>

#include "../include/Funcionario.h"
#include "../include/Empresa.h"


class EmpresaController {

public:
	void criarEmpresa(Empresa &empresa);
	void addFuncionario(Empresa &empresa);
	void listarFuncionario(Empresa &empresa);

};


#endif