#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <string>


using namespace std;

class Funcionario {
	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short int m_idade;
		short int m_tipo_sanguineo;
		char m_fator_rh;
		string m_especialidade;

	public:
		Funcionario();
		Funcionario(int id, string nome, string cpf, short int idade, 
					short int tipo_sanguineo, char fator_rh, string especialidade);
		~Funcionario();
};


#endif