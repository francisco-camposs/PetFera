#include "MamiferoNativo.h"

MamiferoNativo::MamiferoNativo(){

}
MamiferoNativo::MamiferoNativo(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string cor_do_pelo, 
			string autorizacao_ibama, string uf_origem, string autorizacao):
	Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, cor_do_pelo), 
	AnimalNativo(autorizacao_ibama, uf_origem, autorizacao){

}
MamiferoNativo::~MamiferoNativo(){

}

void MamiferoNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};