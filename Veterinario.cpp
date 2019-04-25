#include "Veterinario.h"

Veterinario::Veterinario(){

};

Veterinario::Veterinario (int id, string nome, string cpf, short int idade, 
			short int tipo_sanguineo, char fator_rh, 
			string especialidade, string crmv):m_crmv(crmv){

};

Veterinario::~Veterinario(){

};

void Veterinario::set_m_crmv (string crmv){
	m_crmv = crmv;
};

string Veterinario::get_m_crmv (){
	return m_crmv;
};
