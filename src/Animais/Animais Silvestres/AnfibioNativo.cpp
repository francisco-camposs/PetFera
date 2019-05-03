#include "AnfibioNativo.h"

AnfibioNativo::AnfibioNativo(){

}
AnfibioNativo::AnfibioNativo(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas,
			int day, int month, int year, string autorizacao_ibama, string uf_origem, string autorizacao):
	Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, day, month, year),
	AnimalNativo(autorizacao_ibama, uf_origem, autorizacao){

}
AnfibioNativo::~AnfibioNativo(){}

void AnfibioNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};