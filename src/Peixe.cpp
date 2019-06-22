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

void Peixe::write(){
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
	cout<<"Tipo de agua;Cadeia de caracteres;"<<m_tipo_agua<<endl;
};