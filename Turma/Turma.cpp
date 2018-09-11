#include "Turma.h"

#include <iostream>

using namespace std;

Turma::Turma(string nome, string componenteCurricular) {
	this->nome = nome;
	this->componenteCurricular = componenteCurricular;
	this->qtdAlunos = 0;
}

string Turma::getNome() {
	return this->nome;	
}

void Turma::setNome(string nome) {
	this->nome = nome;
}

string Turma::getComponenteCurricular() {
	return this->componenteCurricular;
}

void Turma::setComponenteCurricular(string componenteCurricular) {
	this->componenteCurricular = componenteCurricular;
}

int Turma::getQtdAlunos() {
	return this->qtdAlunos;
}

void Turma::setQtdAlunos(int qtdAlunos) {
	this->qtdAlunos = qtdAlunos;
}

list<Aluno> Turma::getAlunos() {
	return this->alunos;	
}

void Turma::setAlunos(list<Aluno> alunos) {
	//this->alunos.clear();
	this->alunos =alunos;
}

void Turma::addAluno(Aluno * aluno, list<Aluno> alunos) {

	alunos.push_back(*aluno);
	setAlunos(alunos);

}

void Turma::removerAluno(int positionElement ,list<Aluno> alunos) {
	list<Aluno>::iterator aux;
	aux = alunos.begin();
	advance (aux, positionElement);    
	alunos.erase(aux);
	setAlunos(alunos);
}

void Turma::listarAlunos(){

	list<Aluno>::iterator aux;

	for (aux = this->alunos.begin(); aux !=this->alunos.end(); aux++) {
		cout << "Nome: " << aux->getNome() << endl;
	}

}


