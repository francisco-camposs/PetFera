#include "Tratador.h"

Tratador::Tratador(){

};

Tratador::Tratador(int id, string nome, string cpf, short int idade, 
			short int tipo_sanguineo, char fator_rh, 
			string especialidade, int nivel_de_seguranca):m_nivel_de_seguranca(nivel_de_seguranca){
};

Tratador::~Tratador(){

};

// Métodos Sets
void Tratador::set_m_nivel_de_seguranca(int nivel_de_seguranca){
	m_nivel_de_seguranca = nivel_de_seguranca;
};

// Métodos Gets
int Tratador::get_m_nivel_de_seguranca(){
	return m_nivel_de_seguranca;
};




