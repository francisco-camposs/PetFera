#include "AveExotica.h"

AveExotica::AveExotica(){
	
}
AveExotica::AveExotica(int id, string nome_cientifico, char sexo,
		double tamanho, string dieta, Veterinario* veterinario,
		Tratador* tratador, string nome_batismo, double tamanho_do_bico,
		double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem):
	Ave(id, "Aves", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tamanho_do_bico, envergadura_das_asas), 
	AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){

}
AveExotica::~AveExotica(){

}

void AveExotica::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

void AveExotica::write(){
	cout<<"Campo;Tipo de Dados;Valores"<<endl;
	cout<<"Identificador Do animal;Inteiro;"<<m_id<<endl;
	cout<<"Classe do animal;Cadeia de caracteres;"<<m_classe<<endl;
	cout<<"Nome científico do animal;Cadeia de caracteres;"<<m_nome_cientifico<<endl;
	cout<<"Sexo do animal;Caractere;"<<m_sexo<<endl;
	cout<<"Tamanho média em métros;Decimal;"<<m_tamanho<<endl;
	cout<<"Dieta redominante;Cadeia de caracteres;"<<m_dieta<<endl;
	cout<<"Veterinário associado;Interio;"<<m_veterinario->get_id()<<endl;
	cout<<"Tratador responsável;Interio;"<<m_tratador->get_id()<<endl;
	cout<<"Nome de batismo;Cadeia de caracteres;"<<m_nome_batismo<<endl;
	cout<<"Tamanho do bico;Double;"<<m_tamanho_do_bico<<endl;
	cout<<"Envergadura das asas;Double;"<<m_envergadura_das_asas<<endl;
	cout<<"Autorização do Ibama;Cadeia de caracteres;"<<m_autorizacao_ibama<<endl;
	cout<<"País de origem;Cadeia de caracteres;"<<m_pais_origem<<endl;
	cout<<"Cidade de origem;Cadeia de caracteres;"<<m_cidade_origem<<endl;
};

string AveExotica::Tipo(){
	return "AveExotica";
};