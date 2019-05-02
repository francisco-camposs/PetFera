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
