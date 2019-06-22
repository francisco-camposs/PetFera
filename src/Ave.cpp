#include "Ave.h"

Ave::Ave(){

}
Ave::Ave(int id, string classe, string nome_cientifico, char sexo,
		double tamanho, string dieta, Veterinario* veterinario,
		Tratador* tratador, string nome_batismo, double tamanho_do_bico,
		double envergadura_das_asas):
	Animal(id, "Aves", nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
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
	os<<"Dieta predominante;Cadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<0<<endl;
	os<<"Tratador responsável \tInterio \t"<<0<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Tamanho do bico \tDouble \t"<<m_tamanho_do_bico<<endl;
	os<<"Envergadura das asas \tDouble \t"<<m_envergadura_das_asas<<endl;

	return os;
}

void Ave::inicializar_ave(int id){
	this->inicializar("Aves", id);

	cout << "Digite o tamanho do bico da ave: " << endl;
	m_tamanho_do_bico = input.inputInt();

	cout << "Digite o tamanho da envergadura das asas: " << endl;
	m_envergadura_das_asas = input.inputInt();

	this->set_tamanho_do_bico(m_tamanho_do_bico);
	this->set_envergadura_das_asas(m_envergadura_das_asas);
};