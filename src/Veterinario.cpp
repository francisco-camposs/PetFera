#include "Veterinario.h"
 
using namespace std;

Veterinario::Veterinario(){

};

Veterinario::Veterinario (int id, string nome, string cpf, short int idade, 
			string tipo_sanguineo, char fator_rh, 
			string especialidade, string crmv): Funcionario(id,nome,cpf,idade,tipo_sanguineo,fator_rh,especialidade), m_crmv(crmv){

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

void Veterinario::write(){
	cout<<"Campo;Tipo de dado;Valores"<<endl;
	cout<<"Identificador do funcionário;Cadeia de caracteres;"<<m_id << endl;
	cout<<"Função;Cadeia de Caracteres;Veterinário" << endl;
	cout<<"Nome do funcionário;Cadeia de caracteres;"<<m_nome << endl;
	cout<<"CPF do funcionário;Cadeia de caracteres;"<<m_cpf << endl;
	cout<<"Idade do funcionário;Inteiro;"<<m_idade << endl;
	cout<<"Tipo sanguíneo;Cadeia de caracteres;"<<m_tipo_sanguineo << endl;
	cout<<"Fator RH;Caractere;"<<m_fator_rh << endl;
	cout<<"Especialidade;Cadeia de caracteres;"<<m_especialidade << endl;
	cout<<"Código CRMV;Cadeia de caracteres;"<<m_crmv << endl;
};