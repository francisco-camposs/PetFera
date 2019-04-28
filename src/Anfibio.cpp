#include "Anfibio.h"

Anfibio::Anfibio(){

};
Anfibio::Anfibio(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* tratador, string nome_batismo, int total_de_mudas,
		int day, int month, int year): Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),  m_total_de_mudas(total_de_mudas){
	m_ultima_muda.set_day(day);
	m_ultima_muda.set_month(month);
	m_ultima_muda.set_year(year);
};

Anfibio::~Anfibio(){

};

void Anfibio::set_total_de_mudas(int total_de_mudas){
	m_total_de_mudas = total_de_mudas;
};
void Anfibio::set_ultima_muda(date ultima_muda){
	m_ultima_muda = ultima_muda;
};
int Anfibio::get_total_de_mudas(){
	return m_total_de_mudas;
};
date Anfibio::get_ultima_mudas(){
	return m_ultima_muda;
};
