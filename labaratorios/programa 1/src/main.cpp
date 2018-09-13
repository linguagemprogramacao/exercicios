#include "../include/Funcionario.h"
#include "../include/Empresa.h"
#include "../include/EmpresaController.h"

#include <iostream>

int main(int argc, char const *argv[]) {

	bool sair = false;
	char opt;

	EmpresaController empresaController;
	Empresa empresa;
	system("clear");
	while(!sair) {

		cout << "Opções: " << endl << 
			"(1) Cadastrar Empresa" << endl <<
			"(2) Adicionar Funcionario" << endl <<
			"(3) Listar Funcionario" << endl <<
			"(4) - Sair" << endl;

		cin >>  opt;

		
		switch(opt) {

			case '1':
				empresaController.criarEmpresa(empresa);
				break;

			case '2':
				empresaController.addFuncionario(empresa);
				break;

			case '3':
				empresaController.listarFuncionario(empresa);
				break;
				
			case '4':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.";
		}
	}

	/* code */
	return 0;
}