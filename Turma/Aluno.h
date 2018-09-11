
#ifndef ALUNO_H
#define ALUNO_H
#include <string>

using namespace std;

class Aluno {


private:
	string nome;
	string email;
	string curso;
	bool ativo;
	string matricula;

public:
	Aluno();
	void setNome(string nome);
	string getNome();
	void setEmail(string email);
	string getEmail();
	void setMatricula(string matricula);
	string getMatricula();
	void setCurso(string curso);
	string getCurso();
	void setAtivo(bool ativo);
	bool isAtivo();
	string toString();


};


#endif