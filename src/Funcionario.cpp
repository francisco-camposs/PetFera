#include "Funcionario.h"
 
using namespace std;

// Construtores e destrutor
Funcionario::Funcionario(){

};

Funcionario::Funcionario (int id, string nome, string cpf, short int idade, string tipo_sanguineo, char fator_rh, string especialidade): m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), m_tipo_sanguineo(tipo_sanguineo), m_fator_rh(fator_rh), m_especialidade(especialidade){

};

Funcionario::~Funcionario(){

};

// Métodos Sets
void Funcionario::set_id(int id){
	m_id = id;	
};

void Funcionario::set_nome(string nome){
	m_nome = nome;	
};

void Funcionario::set_cpf(string cpf){
	m_cpf = cpf;	
};

void Funcionario::set_idade(short int idade){
	m_idade = idade;	
};

void Funcionario::set_tipo_sanguineo(string tipo_sanguineo){
	m_tipo_sanguineo = tipo_sanguineo;	
};

void Funcionario::set_fator_rh(char fator_rh){
	m_fator_rh = fator_rh;	
};

void Funcionario::set_especialidade(string especialidade){
	m_especialidade = especialidade;	
};

// Métodos Gets
int Funcionario::get_id(){
	return m_id;
};

string Funcionario::get_nome(){
	return m_nome;
};

string Funcionario::get_cpf(){
	return m_cpf;
};

short int Funcionario::get_idade(){
	return m_idade;
};

string Funcionario::get_tipo_sanguineo(){
	return m_tipo_sanguineo;
};

char Funcionario::get_fator_rh(){
	return m_fator_rh;
};

string Funcionario::get_especialidade(){
	return m_especialidade;
};

