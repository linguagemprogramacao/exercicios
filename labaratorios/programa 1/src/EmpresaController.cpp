#include "EmpresaController.h"

void EmpresaController::criarEmpresa(Empresa &empresa) {

	string nomeEmpresa;
	string CNPJ;

	cin.ignore(1, '\n');
	cout << "Nome da Empresa: ";
	getline(cin, nomeEmpresa);

	cout << "CNPJ da Empresa (Apenas numeroa): ";
	cin >> CNPJ;

	empresa.setNome(nomeEmpresa);
	empresa.setCNPJ(CNPJ);

	system("clear");
	cout << "Empresa criada com sucesso" << endl << endl;

}


void EmpresaController::addFuncionario(Empresa &empresa) {

	Funcionario funcionario;
	cin >> funcionario;

	empresa.addFuncionario(funcionario);

}

void EmpresaController::listarFuncionario(Empresa &empresa) {

	list<Funcionario>::iterator itFuncionario = empresa.getFuncionarios().begin();

	for(;itFuncionario!=empresa.getFuncionarios().end(); itFuncionario++) {
	
		cout << (*itFuncionario);

	}

}
