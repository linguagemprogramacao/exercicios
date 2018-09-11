#include <iostream>
#include "Aluno.h"
#include "Turma.h"

int main(int argc, char const *argv[])
{

	Aluno * aluno = new Aluno();
	Aluno * aluno2 = new Aluno();

	Turma * turma = new Turma("Linguagem de Programação 1", "IMD00010");

	aluno->setNome("Jerffeson Gomes");
	aluno->setEmail("jerffeson.gomes@imd.ufrn.br");
	aluno->setMatricula("20180001226");
	aluno->setCurso("BTI");
	aluno->setAtivo(true);
	
	aluno2->setNome("Fernanda Chacon");
	aluno2->setEmail("fernanda.chacon@imd.ufrn.br");
	aluno2->setMatricula("201800012845");
	aluno2->setCurso("Engenharia de Software");
	aluno2->setAtivo(true);

	turma->addAluno(aluno, turma->getAlunos());
	turma->addAluno(aluno2, turma->getAlunos());

	cout << turma->getAlunos().front().getNome() << endl;
	cout << turma->getAlunos().back().getNome() << endl;
	cout << "-----------------------------\n\n";

	turma->removerAluno(0, turma->getAlunos());
	turma->removerAluno(1, turma->getAlunos());
	turma->listarAlunos();


	/* code */
	return 0;
}