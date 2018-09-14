#include "EmpresaController.h"

void EmpresaController::criarEmpresa() {

	string nomeEmpresa;
	string CNPJ;

	cin.ignore(1, '\n');
	cout << "Nome da Empresa: ";
	getline(cin, nomeEmpresa);

	cout << "CNPJ da Empresa (Apenas numeroa): ";
	cin >> CNPJ;

	this->empresa.setNome(nomeEmpresa);
	this->empresa.setCNPJ(CNPJ);

	system("clear");
	cout << "Empresa criada com sucesso" << endl << endl;

}


void EmpresaController::addFuncionario() {

	Funcionario * funcionario = new Funcionario();
	cin >> funcionario;



	this->empresa.getFuncionarios().push_back(new Funcionario(funcionario->getNome(), funcionario->getSalario()));

	cout << this->empresa.getFuncionarios().size();

	list<Funcionario *>::iterator itFuncionario = this->empresa.getFuncionarios().begin();
	for(;itFuncionario != this->empresa.getFuncionarios().end(); itFuncionario++) {
	
		cout << (*itFuncionario)->getNome();

	 }

	//cout << "Tamnho da lista: " << this->empresa.getFuncionarios().size();
	// this->empresa.addFuncionario(funcionario);

	

}

void EmpresaController::listarFuncionario() {

	// list<Funcionario>::iterator itFuncionario = this->empresa.getFuncionarios().begin();

	// int size = this->empresa.getFuncionarios().size();
	// cout << "Tamnho da lista antes de imprimir " << size;

	// for(int i = 0; i < size; i++, itFuncionario++) {
	
	// 	//cout << (*itFuncionario);

	// }

}



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