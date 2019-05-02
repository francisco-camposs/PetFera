#include "Ave.h"

Ave::Ave(){

}
Ave::Ave(int id, string classe, string nome_cientifico, char sexo,
		double tamanho, string dieta, Veterinario* veterinario,
		Tratador* tratador, string nome_batismo, double tamanho_do_bico,
		double envergadura_das_asas):
	Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_tamanho_do_bico(tamanho_do_bico), m_envergadura_das_asas(envergadura_das_asas){
}
Ave::~Ave(){

}

void Ave::set_tamanho_do_bico(double tamanho_do_bico){
	m_tamanho_do_bico = tamanho_do_bico;
}
void Ave::set_envergadura_das_asas(double envergadura_das_asas){
	m_envergadura_das_asas = envergadura_das_asas;
}
double Ave::get_tamanho_do_bico(){
	return m_tamanho_do_bico;
}
double Ave::get_envergadura_das_asas(){
	return m_envergadura_das_asas;
}