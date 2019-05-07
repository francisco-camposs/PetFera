#include "Reptil.h"

Reptil::Reptil(){

}
Reptil::Reptil(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, bool venenoso,
			string tipo_veneno):
	Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_venenoso(venenoso), m_tipo_veneno(tipo_veneno){

}
Reptil::~Reptil(){

}

void Reptil::set_venenoso(bool venenoso){
	m_venenoso = venenoso;
}
void Reptil::set_tipo_veneno(string tipo_veneno){
	m_tipo_veneno = tipo_veneno;
}
bool Reptil::get_venenoso(){
	return m_venenoso;
}
string Reptil::get_tipo_veneno(){
	return m_tipo_veneno;
}

void Reptil::write(){
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
	cout<<"Venenoso;booleano;"<<m_venenoso<<endl;
	cout<<"Tipo de veneno;Cadeia de caracteres;"<<m_tipo_veneno<<endl;
};