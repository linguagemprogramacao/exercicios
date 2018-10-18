#include "../include/Funcionario.h"

int Funcionario::countFuncionarios = 0;

int Funcionario::getCountFuncionarios() {
	return Funcionario::countFuncionarios;
}

string& Funcionario::getNome() {
	return this->nome;
}

void Funcionario::setNome(string nome) {
	this->nome = nome;
}

float &Funcionario::getSalario() {
	return this->salario;
}

void Funcionario::setSalario(float salario) {
	this->salario = salario;
}

Funcionario::Funcionario() {
	this->nome = "";
	this->salario = 0.0;
}

Funcionario::Funcionario(string nome, float salario) {
	this->nome = nome;
	this->salario = salario;
}

istream& operator>> (istream &i, Funcionario * funcionario) {
	cout << "Informe os dados do funcionario: \n";
	cout << "Nome: ";

	i.ignore(1, '\n');
	getline(i, funcionario->nome);

	cout << "Salario: ";

	i >> funcionario->salario;
	return i;
}

ostream& operator<< (ostream &o, Funcionario * const funcionario) {
	
	o <<fixed<< "\nNome: " << funcionario->nome << endl << "Salario: " << funcionario->salario << endl;

	return o;
}

bool Funcionario::operator== (Funcionario &funcionario) const{

	string aux1 = this->nome;
	string aux2 = funcionario.getNome();

	// Converte os nomes dos funcionarios para minusculo
	transform(aux1.begin(), aux1.end(), aux1.begin(), ::tolower);
	transform(aux2.begin(), aux2.end(), aux2.begin(), ::tolower);

	if(aux1.compare(aux2) == 0) {
		return true; // Se os dois nomes forem iguais, então é o mesmo funcionario
	} else {
		return false;
	}

}
