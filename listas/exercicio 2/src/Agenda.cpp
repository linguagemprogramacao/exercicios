#include "Agenda.h"


/* armazena um novo contato */
void Agenda::insereContato(string nome, int idade, float altura) {

	Pessoa p(nome, idade, altura);
	contatos[total_contatos] = p;

	total_contatos++;
}

/* remove um contato pelo nome e reorganiza a agenda */
void Agenda::removeContato (string nome) {

}

/* retorna o indice para o contato ou -1 caso nao exista */
int Agenda::buscaContato(string nome) {
	return 0;
}

/* lista todos os contatos ou apenas aqueles que
iniciam por uma determinada letra */
void Agenda::listaContato(char letra) {

	for (int i = 0; i <  total_contatos; i++) {
		cout << contatos[i];
	}

}

/* imprime os dados do contato armazenado na posicao i */
void Agenda::imprimeContato(int i) {

}

Agenda::Agenda() {
	total_contatos = 0;
} 