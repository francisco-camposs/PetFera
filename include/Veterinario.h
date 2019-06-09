#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

class Veterinario : public Funcionario{
	private:
		string m_crmv;

	public:
		// Métodos contrutores e destrutores
		Veterinario();
		Veterinario(int id, string nome, string cpf, short int idade, 
					string tipo_sanguineo, char fator_rh, 
					string especialidade, string crmv);
		
		Veterinario(Veterinario &Veterinario_);
		~Veterinario();

		void set_crmv (string crmv);

		string get_crmv ();
		string write();
};

#endif