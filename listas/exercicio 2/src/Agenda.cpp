#include "Agenda.h"

/**
* @file Agenda.cpp
* @brief Classe que representa uma Agenda
* @author Jerffeson
*/

/**
* @brief Armazena um novo contato
* @param nome : String 
* @param idade : int
* @param altura : float 
*/
void Agenda::insereContato(string nome, int idade, float altura) {

	Pessoa p(nome, idade, altura);
	contatos[total_contatos] = p; /**< Sobregarda do operador= necessária para essa ação */

	total_contatos++;
	cout << "Contato Adicionado Com sucesso" << endl;
}

/**
* @brief Remove um contato pelo nome (Case Sensitive) e reorganiza a agenda
* @param nome : String - Nome do contato a ser apagado
*/
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

/**
* @brief Retorna o indice do contato
* @param nome : String - Nome do contato a ser procurado (Case Sensitive)
* @return Inteiro - Indice do contato na lista <br />-1 - Caso o contado não exista
*/
int Agenda::buscaContato(string nome) {

	for(int i = 0; i < total_contatos; i++){
       
		if(nome.compare(contatos[i].getNome()) == 0) {
			return i;
		}

    }

	return -1;
}

/**
* @brief  lista todos os contatos ou apenas aqueles que iniciam por uma determinada letra
* @param letra : char - Primeira letra do nome dos contatos a ser embuscado
*/
void Agenda::listaContato(char letra) {

	if(letra == '\0') { /**< Caso nenhum caracter seja inserido, exibe todos os contatos*/
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