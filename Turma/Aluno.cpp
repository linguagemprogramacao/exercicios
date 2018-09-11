#include <iostream>
#include "Aluno.h"

using namespace std;

Aluno::Aluno() {
	setNome("");
	setEmail("");
	setCurso("");
	setMatricula("");
	setAtivo(false);
}

void Aluno::setNome(string nome) {
	this->nome = nome;
}
	
string Aluno::getNome() {
	return nome;
}

void Aluno::setEmail(string email) {
	this->email = email;
}

string Aluno::getEmail() {
	return email;
}

void Aluno::setMatricula(string matricula) {
	this->matricula = matricula;
}

string Aluno::getMatricula() {
	return matricula;
}

void Aluno::setCurso(string curso) {
	this->curso = curso;
}

string Aluno::getCurso() {
	return curso;
}

void Aluno::setAtivo(bool ativo) {
	this->ativo = ativo;
}

bool Aluno::isAtivo() {
	return ativo;
}

string Aluno::toString() {
	return "Aluno:\nNome: " + getNome() + "\nEmail: " + getEmail() +"\nCurso: " + getCurso() + "\nMatricula: " + getMatricula() + "\nAtivo: " + string(isAtivo() ? "true":"false") + "\n";
}