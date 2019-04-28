#include "ReptilNativo.h"

ReptilNativo::ReptilNativo(){

}
ReptilNativo::ReptilNativo(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, bool venenoso,
			string tipo_veneno):
	Reptil(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno){

}
ReptilNativo::~ReptilNativo(){

}