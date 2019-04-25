#include "Tratador.h"

Tratador::Tratador(){

};

Tratador::Tratador(int id, string nome, string cpf, short int idade, 
			short int tipo_sanguineo, char fator_rh, 
			string especialidade, int nivel_de_seguranca):m_nivel_de_seguranca(nivel_de_seguranca){
};

Tratador::~Tratador(){

};

Tratador::Tratador(Tratador &Tratador){
	m_id = Tratador.get_id();
	m_nome = Tratador.get_nome();
	m_cpf = Tratador.get_cpf();
	m_idade = Tratador.get_idade();
	m_tipo_sanguineo = Tratador.get_tipo_sanguineo();
	m_fator_rh = Tratador.get_fator_rh();
	m_especialidade = Tratador.get_especialidade();
	m_nivel_de_seguranca = Tratador.get_nivel_de_seguranca();
};

// Métodos Sets
void Tratador::set_nivel_de_seguranca(int nivel_de_seguranca){
	m_nivel_de_seguranca = nivel_de_seguranca;
};

// Métodos Gets
int Tratador::get_nivel_de_seguranca(){
	return m_nivel_de_seguranca;
};






