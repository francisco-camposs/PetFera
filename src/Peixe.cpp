#include "Peixe.h"

Peixe::Peixe(){

}
Peixe::Peixe(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, string tipo_agua):
	Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_tipo_agua(tipo_agua){

}
Peixe::~Peixe(){

}

void Peixe::set_tipo_agua(string tipo_agua){
	m_tipo_agua = tipo_agua;
}
string Peixe::get_tipo_agua(){
	return m_tipo_agua;
}

string Peixe::write(){
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
	str<<m_tipo_agua<<endl;

	return str.str();
};

string Peixe::Tipo(){
	return "Peixe";
};

ostream& Peixe::print(ostream& os)const{
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
	os<<"Tipo de agua \tCadeia de caracteres \t"<<m_tipo_agua<<endl;
	
	return os;
}