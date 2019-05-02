#include "Reptil.h"

Reptil::Reptil(){

}
Reptil::Reptil(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, bool venenoso,
			string tipo_veneno):
	Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_venenoso(venenoso), m_tipo_veneno(tipo_veneno){

}
Reptil::~Reptil(){

}

void Reptil::set_venenoso(bool venenoso){
	m_venenoso = venenoso;
}
void Reptil::set_tipo_veneno(string tipo_veneno){
	m_tipo_veneno = tipo_veneno;
}
bool Reptil::get_venenoso(){
	return m_venenoso;
}
string Reptil::get_tipo_veneno(){
	return m_tipo_veneno;
}