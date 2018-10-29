#include "Data.h"

/**
* @file Data.cpp
* @brief Classe que representa uma Data
* @author Jerffeson
*/

/**
* @brief  Inicializa o objeto com a data atual
*/
Data::Data (){

	auto now = Clock::now();
    std::time_t now_c = Clock::to_time_t(now);
    struct tm *parts = std::localtime(&now_c);

    this->ano = 1900 +  parts->tm_year; // O tm_ano retorna a quantidade de anos entre o AnoAtual - 1900;
    this->mes = parts->tm_mon + 1; 		// O tm_mon inicia em 0
    this->dia = parts->tm_mday;

}

/**
* @brief  Inicializa o objeto com a data informada pelo usuário
*/
Dat
Data::Data(int dia, int mes, int ano) {
	if(validaData(dia, mes, ano)) {
		this->dia = dia;
		this->mes = mes;
		this->ano = ano;
	} else {
		cout << "data Invalida" << endl;
	}
}

/**
* @brief Soma X anos a data.
* @details Converte a quantidade de anos recebida em dias, ajustando os anos bissestos
* @param quantidade : int - Quantidade de anos a serem acrecentados a data
*/
void Data::somarAnos(int quantidade) {

	
	int totalDias = 0;

	for (int aux = 1;quantidade > 0; quantidade--, aux++){

		totalDias +=365;

		if(validaData(29, 2, this->ano+aux)) {
			totalDias++; // O ano tem um dia a mais, pois é bissesto
		}

	}

	somarDias(totalDias);

}

/**
* @brief Soma X meses a data.
* @details Converte a quantidade de meses em anos e usa o metodo somarAnos(int), depois adiciona o retante dos meses se necessário e valida a data 29/02
* @param quantidade : int - Quantidade de meses a serem acrecentados a data
*/
void Data::somarMeses(int quantidade) {

	somarAnos(quantidade/12);
	int addMes = quantidade%12;

	this->mes += addMes;

	if (this->mes > 12) {
			this->ano++;
			this->mes = this->mes - 12;
	}

	if (this->dia == 29 and this->mes == 2) { // Valida o dia 29 de fevereiro
		if(!validaData(this->dia, this->mes, this->ano)) {
			this->dia = 1;
			this->mes = 3;
		}
	}

}

/**
* @brief Soma X dias a data.
* @details Soma os dias as datas e valida a data 29/02
* @param quantidade : int - Quantidade de dias a serem acrecentados a data
*/
void Data::somarDias(int quantidade) {

	while(quantidade > 0) {

		int diasMes = qntDiasMes(this->mes, this->ano);

		for (;this->dia < diasMes and quantidade > 0;) {
			this->dia++;
			quantidade--;
		}

		if (this->dia >= diasMes and quantidade > 0) { // Faz a virada de mês na contagem de dias
			this->dia = 1;
			this->mes++;
			quantidade--;
			
		}
		
		if (this->mes > 12) { //Faz a virada de anos na contagem de meses 
			this->ano++;
			this->mes = 1;
		}

	}
}

void Data::proximoDia() {
	somarDias(1);
}

/**
* @brief Retorna a quantidade de dias em um mês e ano especifico
* @param mes : int - mês a ser descoberto a quantidade de dias
* @param ano : int - ano do mes a ser descoberto a quantidade de dias
* @return quantidade de dias no mês e ano passado por parametro
*/
int Data::qntDiasMes(int mes, int ano) {

    int dias = 0;

	if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		dias = 30;
	} else if (mes == 02) {

		bool leapano = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

		if (leapano == 0) {
				dias = 28;
		} else { 
				dias = 29;
		}
	} else { 
		dias = 31;
	}

	return dias;

}

/**
* @brief Valida datas evitando datas como 29/2/2018
* @return true - Se a data for valida <br /> false - Se a data não existir
*/
bool Data::validaData(int dias, int mes, int ano) {

	if(dias < 28 or dias > 31 or mes < 0 or mes > 12 or ano < 0) {
		return false;
	} else {

		int diasMes = qntDiasMes( mes, ano);

		if (dias > diasMes) {
			return false;
		}

	}

	return true;
}

ostream& operator<< (ostream &o, Data const data){ 
	
	o << "Data: " << data.dia << "/" << data.mes << "/" << data.ano;

	return o;
}