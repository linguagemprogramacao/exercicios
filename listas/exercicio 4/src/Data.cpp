#include "Data.h"


Data::Data (){

	auto now = Clock::now();
    std::time_t now_c = Clock::to_time_t(now);
    struct tm *parts = std::localtime(&now_c);

    this->ano = 1900 +  parts->tm_year; // O tm_ano retorna a quantidade de anos entre o AnoAtual - 1900;
    this->mes = parts->tm_mon + 1; 			// Inicia em 0
    this->dia = parts->tm_mday;

}

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
* Soma X anos a data
*/
void Data::somarAnos(int quantidade) {

	this->ano += quantidade;

	if (this->dia == 29 and this->mes == 2) { // Valida o dia 29 de fevereiro
		if(!validaData(this->dia, this->mes, this->ano)) {
			this->dia = 1;
			this->mes = 3;
		}
	}
}

void Data::somarMeses(int quantidade) {

	int addAnos = quantidade/12;
	int addMes = quantidade%12;

	this->ano += addAnos;
	this->mes += addMes;

	if (this->mes > 12) {
			this->ano++;
			this->mes = 1;
	}

	if (this->dia == 29 and this->mes == 2) { // Valida o dia 29 de fevereiro
		if(!validaData(this->dia, this->mes, this->ano)) {
			this->dia = 1;
			this->mes = 3;
		}
	}

}

void Data::somarDias(int quantidade) {

	while(quantidade > 0) {

		int diasMes = qntDiasMes(this->mes, this->ano);

		for (;this->dia < diasMes and quantidade > 0;) {
			this->dia++;
			quantidade--;

			//cout << "Add 1 dia " << (*this) << endl;

		}

		if (this->dia >= diasMes and quantidade > 0) {
			this->dia = 1;
			this->mes++;
			quantidade--;
		}
		

		if (this->mes > 12) {
			this->ano++;
			this->mes = 1;
		}

		//

	}

}

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
* Valida datas
* Evita datas como 29/2/2018
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
	
	o << "Data: " << data.dia << "/" << data.mes << "/" << data.ano << endl;

	return o;
}