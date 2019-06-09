#include "PeixeNativo.h"

PeixeNativo::PeixeNativo(){

}
PeixeNativo::PeixeNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string tipo_agua, 
			string autorizacao_ibama, string uf_origem):
	Peixe(id, "Gnathostomata", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tipo_agua), 
	AnimalNativo(autorizacao_ibama, uf_origem){

}
PeixeNativo::~PeixeNativo(){

}

void PeixeNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string PeixeNativo::write(){
/*	cout<<"Campo;Tipo de Dados;Valores"<<endl;
	cout<<"Identificador Do animal;Inteiro;"<<m_id<<endl;
	cout<<"Classe do animal;Cadeia de caracteres;"<<m_classe<<endl;
	cout<<"Nome científico do animal;Cadeia de caracteres;"<<m_nome_cientifico<<endl;
	cout<<"Sexo do animal;Caractere;"<<m_sexo<<endl;
	cout<<"Tamanho média em métros;Decimal;"<<m_tamanho<<endl;
	cout<<"Dieta redominante;Cadeia de caracteres;"<<m_dieta<<endl;
	cout<<"Veterinário associado;Interio;"<<m_veterinario->get_id()<<endl;
	cout<<"Tratador responsável;Interio;"<<m_tratador->get_id()<<endl;
	cout<<"Nome de batismo;Cadeia de caracteres;"<<m_nome_batismo<<endl;
	cout<<"Tipo de agua;Cadeia de caracteres;"<<m_tipo_agua<<endl;
	cout<<"Autorização do Ibama;Cadeia de caracteres;"<<m_autorizacao_ibama<<endl;
	cout<<"UF de origem;Cadeia de caracteres;"<<m_uf_origem<<endl;
*/
	ostringstream str;
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	str<<m_tipo_agua<<";";
	str<<m_autorizacao_ibama<<";";
	str<<m_uf_origem<<endl;

	return str.str();
};

string PeixeNativo::Tipo(){
	return "PeixeNativo";
};