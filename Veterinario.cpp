#include "Veterinario.h"

Veterinario::Veterinario(){

};

Veterinario::Veterinario (int id, string nome, string cpf, short int idade, 
			short int tipo_sanguineo, char fator_rh, 
			string especialidade, string crmv):m_crmv(crmv){

};

Veterinario::Veterinario(Veterinario &Veterinario_){
	m_id = Veterinario_.get_id();
	m_nome = Veterinario_.get_nome();
	m_cpf = Veterinario_.get_cpf();
	m_idade = Veterinario_.get_idade();
	m_tipo_sanguineo = Veterinario_.get_tipo_sanguineo();
	m_fator_rh = Veterinario_.get_fator_rh();
	m_especialidade = Veterinario_.get_especialidade();
	m_crmv = Veterinario_.get_crmv();
};


Veterinario::~Veterinario(){

};

void Veterinario::set_crmv (string crmv){
	m_crmv = crmv;
};

string Veterinario::get_crmv (){
	return m_crmv;
};
