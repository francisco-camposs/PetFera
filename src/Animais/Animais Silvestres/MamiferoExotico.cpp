#include "MamiferoExotico.h"

MamiferoExotico::MamiferoExotico(){

}
MamiferoExotico::MamiferoExotico(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string cor_do_pelo, 
			string autorizacao_ibama, string pais_origem, string autorizacao):
	Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, cor_do_pelo), 
	AnimalExotico(autorizacao_ibama, pais_origem, autorizacao){

}
MamiferoExotico::~MamiferoExotico(){

}

void MamiferoExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};