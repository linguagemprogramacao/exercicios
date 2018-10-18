#ifndef EMPRESACONTROLLER_H
#define EMPRESACONTROLLER_H

#include <string>
#include <list>
#include <iostream>


#include "../include/Funcionario.h"
#include "../include/Empresa.h"


class EmpresaController {

private:
	list<Empresa *> empresas; // Lista de empresas do sistema

public:
	void criarEmpresa();
	void addFuncionario();
	void listarFuncionario();
	bool existeFuncionario(list<Funcionario *> funcionarios, Funcionario * funcionario);
	void listarEmpresas();
	void darAumento();
	void porcentagem();
	void run();

	bool existeEmpresa(Empresa * empresa);
};


#endif