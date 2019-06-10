#include "AracnideoExotico.h"

AracnideoExotico::AracnideoExotico() {

};

AracnideoExotico::AracnideoExotico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
			int day, int month, int year, string autorizacao_ibama, string pais_origem, string cidade_origem):
	Aracnideo(id, "Arachnida", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year), 
	AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem) {

};

AracnideoExotico::~AracnideoExotico() {

};

void AracnideoExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string AracnideoExotico::write(){
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
	str<<m_tipo_veneno<<";";
	str<<m_autorizacao_ibama<<";";
	str<<m_pais_origem<<";";
	str<<m_cidade_origem<<endl;

	return str.str();
};

string AracnideoExotico::Tipo(){
	return "AracnideoExotico";
};

ostream& AracnideoExotico::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t"<<m_tamanho<<endl;
	os<<"Dieta redominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInterio \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \tInteiro \t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \tclasse date \t"<<m_ultima_muda<<endl;
	os<<"Tipo de veneno \tCadeia de caracters \t"<<m_tipo_veneno<<endl;
	os<<"Autorização do Ibama \tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"País de origem \tCadeia de caracteres \t"<<m_pais_origem<<endl;
	os<<"Cidade de origem \tCadeia de caracteres \t"<<m_cidade_origem<<endl;

	return os;
}