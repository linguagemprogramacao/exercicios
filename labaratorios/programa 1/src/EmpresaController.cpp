#include "EmpresaController.h"


void EmpresaController::run() {

	bool sair = false;
	char opt;

	//system("clear");
	while(!sair) {

		cout << "Opções: " << endl << 
			"(1) Cadastrar Empresa" << endl <<
			"(2) Adicionar Funcionario" << endl <<
			"(3) Listar Funcionario" << endl <<
			"(4) - Sair" << endl;

		cin >>  opt;

		//system("clear");
		switch(opt) {

			case '1':
				criarEmpresa();
				break;

			case '2':
				addFuncionario();
				break;

			case '3':
				listarFuncionario();
				break;
				
			case '4':
				sair = true;
				break;

			default:
				cout<< "Opção invalida.";
		}
	}
}



void EmpresaController::criarEmpresa() {

	cout << "Cadastro de Empresa:\n";

	string nomeEmpresa;
	string CNPJ;

	cin.ignore(1, '\n');
	cout << "Nome da Empresa: ";
	getline(cin, nomeEmpresa);

	cout << "CNPJ da Empresa (Apenas numeroa): ";
	cin >> CNPJ;

	this->empresa.setNome(nomeEmpresa);
	this->empresa.setCNPJ(CNPJ);

	
	cout << "Empresa criada com sucesso" << endl << endl;

}


void EmpresaController::addFuncionario() {

	Funcionario * funcionario = new Funcionario();
	cin >> funcionario;

	if(existeFuncionario(funcionario)) {
		cout << "Já existe um funcinario com o nome informado.\n";
	} else {
		this->empresa.getFuncionarios().push_back(funcionario);
	}
}

void EmpresaController::listarFuncionario() {

	list<Funcionario *>::iterator itFuncionario = this->empresa.getFuncionarios().begin();
	
	for(;itFuncionario != this->empresa.getFuncionarios().end(); itFuncionario++) {
		cout << (*itFuncionario);
	 }
}

bool EmpresaController::existeFuncionario(Funcionario * funcionario) {

	list<Funcionario *>::iterator itFuncionario = this->empresa.getFuncionarios().begin();

	for(;itFuncionario != this->empresa.getFuncionarios().end(); itFuncionario++) {

		// Não para para comparar Funcionario * fazendo sobrecarga de operadores. por isso é necessário criar variaveis temporarias
		Funcionario f1((*itFuncionario)->getNome(), (*itFuncionario)->getSalario());
		Funcionario f2(funcionario->getNome(), funcionario->getSalario());

	 	if(f1 == f2) {
	 		return true;
	 	}

	}

	 return false;
}

