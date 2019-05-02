#include "ReptilExotico.h"

ReptilExotico::ReptilExotico(){

}
ReptilExotico::ReptilExotico(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string pais_origem, string autorizacao):
	Reptil(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno), 
	AnimalExotico(autorizacao_ibama, pais_origem, autorizacao){

}
ReptilExotico::~ReptilExotico(){

}