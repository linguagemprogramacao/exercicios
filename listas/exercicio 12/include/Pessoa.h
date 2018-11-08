#ifndef Pessoa_H
#define Pessoa_H

#include <string>
#include <ostream>

using namespace std;

class Pessoa {

protected:
	string nome;


public:
	string& getNome();
	void setNome(string nome);

};

#endif