#include "Aracnideo.h"

Aracnideo::Aracnideo() {

};
Aracnideo::Aracnideo(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
		int day, int month, int year): Animal(id, classe, nome_cientifico, sexo, 
		tamanho, dieta, veterinario, tratador, nome_batismo),  m_total_de_mudas(total_de_mudas), 
		m_tipo_veneno(tipo_veneno) {
	m_ultima_muda.set_day(day);
	m_ultima_muda.set_month(month);
	m_ultima_muda.set_year(year);
};

Aracnideo::~Aracnideo() {

};

void Aracnideo::set_tipo_veneno(string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
};

void Aracnideo::set_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
};

void Aracnideo::set_ultima_muda(date ultima_muda) {
	m_ultima_muda = ultima_muda;
};

string Aracnideo::get_tipo_veneno() {
	return m_tipo_veneno;
};

int Aracnideo::get_total_de_mudas() {
	return m_total_de_mudas;
};

date Aracnideo::get_ultima_muda() {
	return m_ultima_muda;
};

string Aracnideo::write(){
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
	str<<m_tipo_veneno<<endl;

	return str.str();
};

string Aracnideo::Tipo(){
	return "Aracnideo";
};

ostream& Aracnideo::print(ostream& os)const{
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

	return os;
}