#include "Peixe.h"

Peixe::Peixe(){

}
Peixe::Peixe(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string tipo_agua):
	Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_tipo_agua(tipo_agua){

}
Peixe::~Peixe(){

}

void Peixe::set_tipo_agua(string tipo_agua){
	m_tipo_agua = tipo_agua;
}
string Peixe::get_tipo_agua(){
	return m_tipo_agua;
}