#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
#include <string>
#include "Veterinario.h"
#include "Tratador.h"

class Animal {
	protected:
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		Veterinario m_veterinario;
		Tratador m_Tratador;
		string m_nome_batismo;

	public:
		Animal();
		Animal(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario& veterinario, 
				Tratador& Tratador, string nome_batismo);
		~Animal();
};

#endif