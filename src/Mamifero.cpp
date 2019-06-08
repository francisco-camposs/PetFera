#include "Mamifero.h"

using namespace std;

Mamifero::Mamifero(){};

Mamifero::Mamifero(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* tratador, string nome_batismo, string cor_do_pelo): Animal(id
		, classe, nome_cientifico, sexo, tamanho, dieta, veterinario
		, tratador, nome_batismo), m_cor_do_pelo(cor_do_pelo) {/*  */};

Mamifero::~Mamifero(){};

void Mamifero::set_m_cor_do_pelo(string cor_do_pelo){
	m_cor_do_pelo = cor_do_pelo;
};

string Mamifero::get_m_cor_do_pelo(){
	return m_cor_do_pelo;
};

void Mamifero::write(){
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
	cout<<"Cor do pelo;Cadeia de caracteres;"<<m_cor_do_pelo<<endl;
};

string Mamifero::Tipo(){
	return "Mamifero";
};
