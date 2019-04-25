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


		void set_m_id(int id);
		void set_m_classe(string classe);
		void set_m_nome_cientifico(string nome_cientifico);
		void set_m_sexo(char sexo);
		void set_m_tamanho(double tamanho);
		void set_m_dieta(string dieta);
		void set_m_veterinario(Veterinario veterinario);
		void set_m_Tratador(Tratador Tratador);
		void set_m_nome_batismo(string nome_batismo);

		int get_m_id();
		string get_m_classe();
		string get_m_nome_cientifico();
		char get_m_sexo();
		double get_m_tamanho();
		string get_m_dieta();
		Veterinario get_m_veterinario();
		Tratador get_m_Tratador();
		string get_m_nome_batismo();

};

#endif