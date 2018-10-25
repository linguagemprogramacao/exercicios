#ifndef Pessoa_H
#define Pessoa_H

#include <string>
#include <ostream>

using namespace std;

class Pessoa {

private:
	string nome;
	int idade;
	double altura;


public:
	Pessoa();
	Pessoa(string nome, int idade, double altura);
	string& getNome();
	void setNome(string nome);
	int& getIdade();
	void setIdade(int idade);
	double& getAltura();
	void setAltura(double altura);
	friend ostream& operator<< (ostream &o, Pessoa const pessoa);
	
	Pessoa& operator=(const Pessoa &pessoa );


};

#endif