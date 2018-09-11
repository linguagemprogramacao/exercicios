#ifndef TURMA_H
#define TURMA_H

#include <string>
#include <list>
#include "Aluno.h"

class Turma {


private:
	string nome;
	string componenteCurricular;
	int qtdAlunos;
	list<Aluno> alunos;

public:
	Turma(string nome, string componenteCurricular);
	string getNome();
	void setNome(string nome);

	string getComponenteCurricular();
	void setComponenteCurricular(string componenteCurricular);

	int getQtdAlunos();
	void setQtdAlunos(int qtdAlunos);

	void addAluno(Aluno * aluno, list<Aluno> alunos);
	void removerAluno(int positionElement,list<Aluno> alunos);

	list<Aluno> getAlunos();
	void setAlunos(list<Aluno> alunos);

	void listarAlunos();
};

#endif