#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

class Tratador: public Funcionario{
	private:
		int m_nivel_de_seguranca;

	public:
		Tratador();
		Tratador(int id, string nome, string cpf, short int idade, 
					short int tipo_sanguineo, char fator_rh, 
					string especialidade, int nivel_de_seguranca);
		~Tratador();
};

#endif