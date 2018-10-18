#ifndef AGENDA_H
#define AGENDA_H

#define MAX_CONTATOS 100

#include <string>
#include <iostream>
#include "Pessoa.h"

using namespace std;

class Agenda {

	public :
		/* armazena um novo contato */
		void insereContato(string nome, int idade, float altura);

		/* remove um contato pelo nome e reorganiza a agenda */
		void removeContato (string nome);

		/* retorna o indice para o contato ou -1 caso nao exista */
		int buscaContato(string nome);

		/* lista todos os contatos ou apenas aqueles que
		iniciam por uma determinada letra */
		void listaContato(char letra = '\0');

		/* imprime os dados do contato armazenado na posicao i */
		void imprimeContato(int i);

		Agenda();

	private :
		Pessoa contatos[MAX_CONTATOS];
		int total_contatos = 0;

};

#endif