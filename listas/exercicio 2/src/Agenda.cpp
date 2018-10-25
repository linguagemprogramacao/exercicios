#include "Agenda.h"


/* armazena um novo contato */
void Agenda::insereContato(string nome, int idade, float altura) {

	Pessoa p(nome, idade, altura);
	contatos[total_contatos] = p;

	total_contatos++;
	cout << "Contato Adicionado Com sucesso" << endl;
}

/* remove um contato pelo nome e reorganiza a agenda */
void Agenda::removeContato (string nome) {

	int indice = buscaContato(nome);
	int aux = 0;

	if (total_contatos == 0) {

		cout << "Não a contatos para remover" << endl;

	} else if (total_contatos == 1) {

		total_contatos=0;
		cout << "Contato Removido Com sucesso" << endl;


	} else if(indice != -1){

		for(int i = indice; i < total_contatos-1; i++){

			aux = i + 1;

			contatos[i] = contatos[aux];
		}

		total_contatos--;

		cout << "Contato Removido Com sucesso" << endl;

	}
}

/* retorna o indice para o contato ou -1 caso nao exista */
int Agenda::buscaContato(string nome) {

	for(int i = 0; i < total_contatos; i++){
       
		if(nome.compare(contatos[i].getNome()) == 0) {
			return i;
		}

    }

	return -1;
}

/* lista todos os contatos ou apenas aqueles que
iniciam por uma determinada letra */
void Agenda::listaContato(char letra) {

	if(letra == '\0') {
		for (int i = 0; i <  total_contatos; i++) {
			cout << "Indice: " << i << endl << contatos[i] << endl;
		}
	} else {

		for (int i = 0; i <  total_contatos; i++) {
			if(static_cast<char>(std::tolower(static_cast<unsigned char>(letra))) == static_cast<char>(std::tolower(static_cast<unsigned char>(contatos[i].getNome().at(0))))) {
				cout << "Indice: " << i << endl << contatos[i] << endl;
			}
		}
	}

}

/* imprime os dados do contato armazenado na posicao i */
void Agenda::imprimeContato(int i) {
	cout << getContato(i);
}

Agenda::Agenda() {
	total_contatos = 0;
} 

Pessoa Agenda::getContato(int indice) {
	return contatos[indice];
}

int Agenda::getTotalContatos() {
	return total_contatos;
}