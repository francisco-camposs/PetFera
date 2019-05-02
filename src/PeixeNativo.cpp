#include "PeixeNativo.h"

PeixeNativo::PeixeNativo(){

}
PeixeNativo::PeixeNativo(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string tipo_agua, 
			string autorizacao_ibama, string uf_origem, string autorizacao):
	Peixe(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tipo_agua), 
	AnimalNativo(autorizacao_ibama, uf_origem, autorizacao){

}
PeixeNativo::~PeixeNativo(){

}