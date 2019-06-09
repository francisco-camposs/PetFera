#include "InsetoNativo.h"

InsetoNativo::InsetoNativo() {

};

InsetoNativo::InsetoNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_metamorfose, 
			int day, int month, int year, string autorizacao_ibama, string uf_origem):
	Inseto(id, "Insecta", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_metamorfose, day, month, year), 
	AnimalNativo(autorizacao_ibama, uf_origem) {

};

InsetoNativo::~InsetoNativo() {

};

void InsetoNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string InsetoNativo::write(){
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
	cout<<"Total de mudas;Inteiro;"<<m_total_de_mudas<<endl;
	cout<<"Data da última muda;classe date;"<<m_ultima_muda<<endl;
	cout<<"Tipo de metamorfose;Cadeia de caracteres;"<<m_tipo_metamorfose<<endl;
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
	str<<m_total_de_mudas<<";";
	str<<m_ultima_muda<<";";
	str<<m_tipo_metamorfose<<";";
	str<<m_autorizacao_ibama<<";";
	str<<m_uf_origem<<endl;

	return str.str();
};

string InsetoNativo::Tipo(){
	return "InsetoNativo";
};