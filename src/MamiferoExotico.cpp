#include "MamiferoExotico.h"

MamiferoExotico::MamiferoExotico(){

}
MamiferoExotico::MamiferoExotico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string cor_do_pelo, 
			string autorizacao_ibama, string pais_origem, string cidade_origem):
	Mamifero(id, "Mammalia", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, cor_do_pelo), 
	AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){

}
MamiferoExotico::~MamiferoExotico(){

}

void MamiferoExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string MamiferoExotico::write(){
	ostringstream str;
	str<<"MamiferoExotico;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// País de origem
	str<<m_pais_origem<<";";
	// Cidade de origem
	str<<m_cidade_origem<<";";
	// Cor dos pelos
	str<<m_cor_do_pelo<<endl;

	return str.str();

};

string MamiferoExotico::Tipo(){
	return "MamiferoExotico";
};

ostream& MamiferoExotico::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInterio \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Cor do pelo \tCadeia de caracteres \t"<<m_cor_do_pelo<<endl;
	os<<"Autorização do Ibama \tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"País de origem \tCadeia de caracteres \t"<<m_pais_origem<<endl;
	os<<"Cidade de origem \tCadeia de caracteres \t"<<m_cidade_origem<<endl;

	return os;
}

void MamiferoExotico::inicializar_animal(int id){
	
};