#include "AveNativa.h"

AveNativa::AveNativa(){
	
}
AveNativa::AveNativa(int id, string classe, string nome_cientifico, char sexo,
		double tamanho, string dieta, Veterinario* veterinario,
		Tratador* tratador, string nome_batismo, double tamanho_do_bico,
		double envergadura_das_asas, string autorizacao_ibama, string uf_origem, string autorizacao):
	Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tamanho_do_bico, envergadura_das_asas), 
	AnimalNativo(autorizacao_ibama, uf_origem, autorizacao){

}
AveNativa::~AveNativa(){

}

void AveNativa::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};