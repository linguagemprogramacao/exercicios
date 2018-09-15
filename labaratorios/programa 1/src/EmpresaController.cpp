#include "EmpresaController.h"


void EmpresaController::run() {

	bool sair = false;
	char opt;

	//system("clear");
	while(!sair) {

		cout << "Opções: " << endl << 
			"(1) Cadastrar Empresa" << endl <<
			"(2) Listar Empresas" << endl <<
			"(3) Adicionar Funcionario" << endl <<
			"(4) Listar Funcionario" << endl <<
			"(5) Dar Aumento" << endl <<
			"(6) Média de funcionarios" << endl <<
			"(7) - Sair" << endl;

		cin >>  opt;

		//system("clear");
		switch(opt) {

			case '1':
				criarEmpresa();
				break;

			case '2':
				listarEmpresas();
				break;

			case '3':
				addFuncionario();
				break;

			case '4':
				listarFuncionario();
				break;

			case '5':
				darAumento();
				break;

			case '6':
				porcentagem();
				break;

			case '7':
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


	Empresa * e = new Empresa();

	e->setNome(nomeEmpresa);
	e->setCNPJ(CNPJ);

	if(existeEmpresa(e)) { 
		cout << "\nJa existe uma empresa com o CNPJ informado" << endl << endl;
	} else {
		this->empresas.push_back(e);
		Empresa::countEmpresas++;
		cout << "Empresa criada com sucesso" << endl << endl;
	}

	

}

void EmpresaController::listarEmpresas() {

	if (this->empresas.size() > 0) {

		list<Empresa *>::iterator itEmpresa = this->empresas.begin();
		int a = 1;

		for(;itEmpresa != this->empresas.end(); itEmpresa++, a++) {
			cout << "(" << a << ") - " << (*itEmpresa)->getNome() << " (" << (*itEmpresa)->getCNPJ() <<") " << endl;
		 }
	} else {
		cout << "\nNenhuma empresa cadastrada.\n\n";
	}
}


bool EmpresaController::existeEmpresa(Empresa * empresa) {

	list<Empresa *>::iterator itEmpresa = this->empresas.begin();

	for(;itEmpresa != this->empresas.end(); itEmpresa++) {

		// Não para para comparar Funcionario * fazendo sobrecarga de operadores. por isso é necessário criar variaveis temporarias
		Empresa e1((*itEmpresa)->getNome(), (*itEmpresa)->getCNPJ());
		Empresa e2(empresa->getNome(), empresa->getCNPJ());

	 	if(e1 == e2) {
	 		return true;
	 	}

	}

	 return false;
}



void EmpresaController::addFuncionario() {

	if (this->empresas.size() > 0) {

		size_t iopt = -1;

		list<Empresa *>::iterator itEmpresa;


		//system("clear");
		while(iopt != 0) {

			cout << "\nEmpresas cadastradas:\n(0) - Voltar\n";
			listarEmpresas();
			cout <<"Informe a empresa que deseja adicionar o funcionario: ";

			cin >>  iopt;

			if(iopt > 0 and iopt <= this->empresas.size()) {

				itEmpresa = this->empresas.begin();
				advance(itEmpresa,(iopt - 1));

				Funcionario * funcionario = new Funcionario();
				cin >> funcionario;
				if(existeFuncionario((*itEmpresa)->getFuncionarios(), funcionario)) {
				  	cout << "Já existe um funcinario com o nome informado.\n";
				} else {
				  	(*itEmpresa)->getFuncionarios().push_back(funcionario);
				  	Funcionario::countFuncionarios++;
				}


			} else if (iopt < 0 or iopt > this->empresas.size()){
				cout << "Valor invalido.\n";
			}
		}

	} else {
		cout << "\nNenhuma empresa cadastrada.\n\n";
	}

}

void EmpresaController::listarFuncionario() {


	if (this->empresas.size() > 0) {

		size_t iopt = -1;

		list<Empresa *>::iterator itEmpresa;

		//system("clear");
		while(iopt != 0) {

			cout << "\nEmpresas cadastradas:\n(0) - Voltar\n";
			listarEmpresas();
			cout <<"Informe a empresa que deseja listar seus funcionarios: ";

			cin >>  iopt;

			if(iopt > 0 and iopt <= this->empresas.size()) {

				itEmpresa = this->empresas.begin();
				advance(itEmpresa,(iopt - 1));
				
				if ((*itEmpresa)->getFuncionarios().size() > 0) {
					list<Funcionario *>::iterator itFuncionario = (*itEmpresa)->getFuncionarios().begin();
					for(;itFuncionario != (*itEmpresa)->getFuncionarios().end(); itFuncionario++) {
				 		cout << (*itFuncionario);
					}
				} else {
					cout << "\nNão existe funcioraios cadastrados para essa empresa.\n";
				}
				


			} else if (iopt < 0 or iopt > this->empresas.size()){
				cout << "Valor invalido.\n";
			}
		}

	} else {
		cout << "\nNenhuma empresa cadastrada.\n\n";
	}
}


bool EmpresaController::existeFuncionario(list<Funcionario *> funcionarios, Funcionario * funcionario) {

	list<Funcionario *>::iterator itFuncionario = funcionarios.begin();

	for(;itFuncionario != funcionarios.end(); itFuncionario++) {

		// Não para para comparar Funcionario * fazendo sobrecarga de operadores. por isso é necessário criar variaveis temporarias
		Funcionario f1((*itFuncionario)->getNome(), (*itFuncionario)->getSalario());
		Funcionario f2(funcionario->getNome(), funcionario->getSalario());

	 	if(f1 == f2) {
	 		return true;
	 	}
	}
	return false;
}


void EmpresaController::darAumento() {

	if (this->empresas.size() > 0) {

		size_t iopt = -1;

		list<Empresa *>::iterator itEmpresa;


		//system("clear");
		while(iopt != 0) {

			cout << "\nSeleciona a empresa na qual estão os funcinario que vão receber aumento:\n(0) - Voltar\n";
			listarEmpresas();
			cout <<"Informe a empresa que deseja adicionar o funcionario: ";

			cin >>  iopt;

			if(iopt > 0 and iopt <= this->empresas.size()) {

				itEmpresa = this->empresas.begin();
				advance(itEmpresa,(iopt - 1));

				if((*itEmpresa)->getFuncionarios().size() > 0) {
					float aumento = 0;

				  	cout <<"Informe o aumento desejado (%): ";
					cin >>  aumento;
					

					list<Funcionario *>::iterator itFuncionario = (*itEmpresa)->getFuncionarios().begin();

					for(;itFuncionario != (*itEmpresa)->getFuncionarios().end(); itFuncionario++) {

						(*itFuncionario)->setSalario((*itFuncionario)->getSalario() * ((aumento/100.00) + 1));

					}
					cout << "\nO aumento de " << aumento << " foi consedido.\n";

				} else {
				  	cout << "\nNão existe funcioraios cadastrados para essa empresa.\n";
				}
			} else if (iopt < 0 or iopt > this->empresas.size()){
				cout << "Valor invalido.\n";
			}
		}
	} else {
		cout << "\nNenhuma empresa cadastrada.\n\n";
	}
}

void EmpresaController::porcentagem(){

	if(Empresa::countEmpresas > 0) { // evita divisão por 0
		cout << "A porcentagem de funcionarios por empresa é de: "  << Funcionario::countFuncionarios/Empresa::countEmpresas;
	} else {
		cout << "\nNenhuma empresa cadastrada.\n\n";
	}


}


