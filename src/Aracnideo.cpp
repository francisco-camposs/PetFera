#include "Aracnideo.h"

Aracnideo::Aracnideo() {

};
Aracnideo::Aracnideo(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
		int day, int month, int year): Animal(id, classe, nome_cientifico, sexo, 
		tamanho, dieta, veterinario, tratador, nome_batismo),  m_total_de_mudas(total_de_mudas), 
		m_tipo_veneno(tipo_veneno) {
	m_ultima_muda.set_day(day);
	m_ultima_muda.set_month(month);
	m_ultima_muda.set_year(year);
};

Aracnideo::~Aracnideo() {

};

void Aracnideo::set_tipo_veneno(string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
};

void Aracnideo::set_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
};

void Aracnideo::set_ultima_muda(date ultima_muda) {
	m_ultima_muda = ultima_muda;
};

string Aracnideo::get_tipo_veneno() {
	return m_tipo_veneno;
};

int Aracnideo::get_total_de_mudas() {
	return m_total_de_mudas;
};

date Aracnideo::get_ultima_muda() {
	return m_ultima_muda;
};

string Aracnideo::write(){
/*	cout<<"Campo;Tipo de Dados;Valores"<<endl;
	cout<<"Identificador Do animal;Inteiro;"<<m_id<<endl;
	cout<<"Classe do animal;Cadeia de caracteres;"<<m_classe<<endl;
	cout<<"Nome científico do animal;Cadeia de caracteres;"<<m_nome_cientifico<<endl;
	cout<<"Sexo do animal;Caractere;"<<m_sexo<<endl;
	cout<<"Tamanho média em métros;Decimal;"<<m_tamanho<<endl;
	cout<<"Dieta redominante;Cadeia de caracteres;"<<m_dieta<<endl;
	cout<<"Veterinário associado;Interio;"<<m_veterinario->get_id()<<endl;
	cout<<"Tratador responsável;Interio;"<<m_tratador->get_id()<<endl;
	cout<<"Nome de batismo;Cadeia de caracteres;"<<m_nome_batismo<<endl;
	cout<<"Total de mudas;Inteiro;"<<m_total_de_mudas<<endl;
	cout<<"Data da última muda;classe date;"<<m_ultima_muda<<endl;
	cout<<"Tipo de veneno;Cadeia de caracters;"<<m_tipo_veneno<<endl;
*/
	ostringstream str;
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	str<<m_total_de_mudas<<";";
	str<<m_ultima_muda<<";";
	str<<m_tipo_veneno<<endl;

	return str.str();
};

string Aracnideo::Tipo(){
	return "Aracnideo";
};
