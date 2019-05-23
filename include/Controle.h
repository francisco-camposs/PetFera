#ifndef CONTROLE_H
#define CONTROLE_H

#include <memory>
#include <iostream>
#include <fstream>
#include <map>

#include "Funcionario.h"
#include "Veterinario.h"
#include "AnfibioExotico.h"
#include "AnfibioNativo.h"
#include "AracnideoExotico.h"
#include "AracnideoNativo.h"
#include "AveExotica.h"
#include "AveNativa.h"
#include "InsetoExotico.h"
#include "InsetoNativo.h"
#include "MamiferoExotico.h"
#include "MamiferoNativo.h"
#include "PeixeExotico.h"
#include "PeixeNativo.h"
#include "ReptilExotico.h"
#include "ReptilNativo.h"

using namespace std;

class Controle{
	private:
		map<int, shared_ptr<Animal>> animais_m;
		map<int, shared_ptr<Funcionario>> funcionarios_m;

	public:
		Controle();
		Controle(map<int, Animal> a, map<int, Funcionario> f);
		~Controle();
		
		void adicionar_animal();
		void remover_animal();
		void alterar_animal();
		void consultar_animais();
		void consultar_animais_por_funcionario();
		
		void adicionar_funcionario();
		void remover_funcionario();
		void alterar_funcionario();
		void consultar_funcionario();
};

#endif