#include "Funcionario.h"

Funcionario::Funcionario(){

};

Funcionario::Funcionario(int id, string nome, string cpf, short int idade, 
						short int tipo_sanguineo, char fator_rh, string especialidade)
						:m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade)
						, m_tipo_sanguineo(tipo_sanguineo), m_fator_rh(fator_rh)
						, m_especialidade(especialidade){

};

Funcionario::~Funcionario(){

};
