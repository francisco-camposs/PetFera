#include "Mamifero.h"

using namespace std;

Mamifero::Mamifero(){};

Mamifero::Mamifero(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* Tratador, string nome_batismo, string cor_do_pelo): Animal(id
		, classe, nome_cientifico, sexo, tamanho, dieta, veterinario
		, Tratador, nome_batismo), m_cor_do_pelo(cor_do_pelo) {/*  */};

Mamifero::~Mamifero(){};

void Mamifero::set_m_cor_do_pelo(string cor_do_pelo){
	m_cor_do_pelo = cor_do_pelo;
};

string Mamifero::get_m_cor_do_pelo(){
	return m_cor_do_pelo;
};
