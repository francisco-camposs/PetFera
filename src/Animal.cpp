#include "Animal.h"

Animal::Animal(){

};

Animal::Animal(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario& veterinario, 
		Tratador& Tratador, string nome_batismo){

};

Animal::~Animal(){

};

void Animal::set_m_id(int id){
	m_id = id;
};

void Animal::set_m_classe(string classe){
	m_classe = classe;
};

void Animal::set_m_nome_cientifico(string nome_cientifico){
	m_nome_cientifico = nome_cientifico;
};

void Animal::set_m_sexo(char sexo){
	m_sexo = sexo;
};

void Animal::set_m_tamanho(double tamanho){
	m_tamanho = tamanho;
};

void Animal::set_m_dieta(string dieta){
	m_dieta = dieta;
};

void Animal::set_m_veterinario(Veterinario veterinario){
	m_veterinario = veterinario;
};

void Animal::set_m_Tratador(Tratador Tratador){
	m_Tratador = Tratador;
};

void Animal::set_m_nome_batismo(string nome_batismo){
	m_nome_batismo = nome_batismo;
};


int Animal::get_m_id(){
	return m_id;
};

string Animal::get_m_classe(){
	return m_classe;
};

string Animal::get_m_nome_cientifico(){
	return m_nome_cientifico;
};

char Animal::get_m_sexo(){
	return m_sexo;
};

double Animal::get_m_tamanho(){
	return m_tamanho;
};

string Animal::get_m_dieta(){
	return m_dieta;
};

Veterinario Animal::get_m_veterinario(){
	return m_veterinario;
};

Tratador Animal::get_m_Tratador(){
	return m_Tratador;
};

string Animal::get_m_nome_batismo(){
	return m_nome_batismo;
};