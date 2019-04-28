#include "AveExotica.h"

AveExotica::AveExotica(){
	
}
AveExotica::AveExotica(int id, string classe, string nome_cientifico, char sexo,
		double tamanho, string dieta, Veterinario* veterinario,
		Tratador* tratador, string nome_batismo, double tamanho_do_bico,
		double envergadura_das_asas):
	Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tamanho_do_bico, envergadura_das_asas){

}
AveExotica::~AveExotica(){

}