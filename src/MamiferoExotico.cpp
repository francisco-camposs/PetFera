#include "MamiferoExotico.h"

MamiferoExotico::MamiferoExotico(){

}
MamiferoExotico::MamiferoExotico(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string cor_do_pelo):
	Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, cor_do_pelo){

}
MamiferoExotico::~MamiferoExotico(){

}