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

string Veterinario::write(){
	ostringstream str;
	str<<"Veterinário;";
	str<<m_id<<";";
	str<<m_nome<<";";
	str<<m_cpf<<";";
	str<<m_idade<<";";
	str<<m_tipo_sanguineo<<";";
	str<<m_fator_rh<<";";
	str<<m_especialidade<<";";
	str<<m_crmv<<endl;

	return str.str();
};

ostream& Veterinario::print(ostream& os)const{
	os<<"Campo \tTipo de dado \tValores"<<endl;
	os<<"Identificador do funcionário \tCadeia de caracteres \t"<<m_id << endl;
	os<<"Função \tCadeia de Caracteres \tVeterinário" << endl;
	os<<"Nome do funcionário \tCadeia de caracteres \t"<<m_nome << endl;
	os<<"CPF do funcionário \tCadeia de caracteres \t"<<m_cpf << endl;
	os<<"Idade do funcionário \tInteiro \t"<<m_idade << endl;
	os<<"Tipo sanguíneo \tCadeia de caracteres \t"<<m_tipo_sanguineo << endl;
	os<<"Fator RH \tCaractere \t"<<m_fator_rh << endl;
	os<<"Especialidade \tCadeia de caracteres \t"<<m_especialidade << endl;
	os<<"Código CRMV \tCadeia de caracteres \t"<<m_crmv << endl;
	return os;
}