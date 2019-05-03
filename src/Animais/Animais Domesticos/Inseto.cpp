#include "Inseto.h"

Inseto::Inseto() {

};
Inseto::Inseto(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_metamorfose, 
		int day, int month, int year): Animal(id, classe, nome_cientifico, sexo, 
		tamanho, dieta, veterinario, tratador, nome_batismo),  m_total_de_mudas(total_de_mudas), 
		m_tipo_metamorfose(tipo_metamorfose) {
	m_ultima_muda.set_day(day);
	m_ultima_muda.set_month(month);
	m_ultima_muda.set_year(year);
};

Inseto::~Inseto() {

};

void Inseto::set_tipo_metamorfose(string tipo_metamorfose) {
	m_tipo_metamorfose = tipo_metamorfose;
};

void Inseto::set_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
};

void Inseto::set_ultima_muda(date ultima_muda) {
	m_ultima_muda = ultima_muda;
};

string Inseto::get_tipo_metamorfose() {
	return m_tipo_metamorfose;
};

int Inseto::get_total_de_mudas() {
	return m_total_de_mudas;
};

date Inseto::get_ultima_muda() {
	return m_ultima_muda;
};

void Inseto::write(){
	cout<<"Campo;Tipo de Dados;Valores"<<endl;
	cout<<"Identificador Do animal;Inteiro;"<<m_id<<endl;
	cout<<"Classe do animal;Cadeia de caracteres;"<<m_classe<<endl;
	cout<<"Nome científico do animal;Cadeia de caracteres;"<<m_nome_cientifico<<endl;
	cout<<"Sexo do animal;Caractere;"<<m_sexo<<endl;
	cout<<"Tamanho média em métros;Decimal;"<<m_tamanho<<endl;
	cout<<"Dieta redominante;Cadeia de caracteres;"<<m_dieta<<endl;
	cout<<"Veterinário associado;Interio;"<<m_veterinario->get_id()<<endl;
	cout<<"Tratador responsável;Interio;"<<m_tratador->get_id()<<endl;
	cout<<"Nome de batismo;Cadeia de caracteres;"<<m_nome_batismo<<endl;
};
