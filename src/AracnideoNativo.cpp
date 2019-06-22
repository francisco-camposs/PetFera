#include "AracnideoNativo.h"

AracnideoNativo::AracnideoNativo() {

};

AracnideoNativo::AracnideoNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
			int day, int month, int year, string autorizacao_ibama, string uf_origem):
	Aracnideo(id, "Arachnida", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year), 
	AnimalNativo(autorizacao_ibama, uf_origem) {

};

AracnideoNativo::~AracnideoNativo() {

};

void AracnideoNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string AracnideoNativo::write(){
	ostringstream str;
	str<<"AracnideoNativo;";
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
	// UF de origem
	str<<m_uf_origem<<";";
	// Total de Mudas
	str<<m_total_de_mudas<<";";
	// Última muda
	str<<m_ultima_muda<<";";
	// Tipo de veneno
	str<<m_tipo_veneno<<endl;

	return str.str();
};

string AracnideoNativo::Tipo(){
	return "AracnideoNativo";
};

ostream& AracnideoNativo::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros\tDecimal\t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<NULL<<endl;
	os<<"Tratador responsável \tInterio \t"<<NULL<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \tInteiro \t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \tclasse date \t"<<m_ultima_muda<<endl;
	os<<"Tipo de veneno \tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	os<<"Autorização do Ibama \tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"UF de origem \tCadeia de caracteres \t"<<m_uf_origem<<endl;

	return os;
};

void AracnideoNativo::inicializar_animal(int id){
	inicializar_aracnideo(id);
	inicializar_nativo();
};