#include "Ave.h"

Ave::Ave(){

}
Ave::Ave(int id, string classe, string nome_cientifico, char sexo,
		double tamanho, string dieta, Veterinario* veterinario,
		Tratador* tratador, string nome_batismo, double tamanho_do_bico,
		double envergadura_das_asas):
	Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_tamanho_do_bico(tamanho_do_bico), m_envergadura_das_asas(envergadura_das_asas){
}
Ave::~Ave(){

}

void Ave::set_tamanho_do_bico(double tamanho_do_bico){
	m_tamanho_do_bico = tamanho_do_bico;
}
void Ave::set_envergadura_das_asas(double envergadura_das_asas){
	m_envergadura_das_asas = envergadura_das_asas;
}
double Ave::get_tamanho_do_bico(){
	return m_tamanho_do_bico;
}
double Ave::get_envergadura_das_asas(){
	return m_envergadura_das_asas;
}

string Ave::write(){
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
	cout<<"Tamanho do bico;Double;"<<m_tamanho_do_bico<<endl;
	cout<<"Envergadura das asas;Double;"<<m_envergadura_das_asas<<endl;
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
	//Autorização do Ibama
	str<<"NVF;";
	// País de origem
	str<<"NVF;";
	// Cidade de origem
	str<<"NVF;";
	// UF de origem
	str<<"NVF;";
	// Total de Mudas
	str<<"NVF;";
	// Última muda
	str<<"NVF;";
	// Tamanho do bico
	str<<m_tamanho_do_bico<<";";
	// Envergadura das Asas
	str<<m_envergadura_das_asas<<";";
	// Cor dos pelos
	str<<"NVF;";
	// Se é venenoso
	str<<"NVF;";
	// Tipo de veneno
	str<<"NVF"<<endl;

	return str.str();
};

string Ave::Tipo(){
	return "Ave";
};

ostream& Ave::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t"<<m_tamanho<<endl;
	os<<"Dieta redominante;Cadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInterio \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Tamanho do bico \tDouble \t"<<m_tamanho_do_bico<<endl;
	os<<"Envergadura das asas \tDouble \t"<<m_envergadura_das_asas<<endl;

	return os;
}