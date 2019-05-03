#include "PeixeExotico.h"

PeixeExotico::PeixeExotico(){

}
PeixeExotico::PeixeExotico(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string tipo_agua, 
			string autorizacao_ibama, string pais_origem, string autorizacao):
	Peixe(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tipo_agua), 
	AnimalExotico(autorizacao_ibama, pais_origem, autorizacao){

}
PeixeExotico::~PeixeExotico(){

}

void PeixeExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};