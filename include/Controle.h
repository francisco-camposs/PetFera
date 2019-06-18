#ifndef CONTROLE_H
#define CONTROLE_H

#include <iostream>
#include <fstream>
#include <map>

#include "Tratamento.h"

using namespace std;

class Controle{
	private:
		map<int, shared_ptr<Animal>> animais_m;
		map<int, shared_ptr<Funcionario>> funcionarios_m;
		Tratamento tratamento;

		void criar_animal(shared_ptr<Animal> &bicho, string classe);
		void criar_animal_nativo(shared_ptr<AnimalNativo> &bicho);
		void criar_animal_exotico(shared_ptr<AnimalExotico> &bicho);

		void criar_anfibio(int modo_criacao);
		void criar_ave(int modo_criacao);
		void criar_mamifero(int modo_criacao);
		void criar_reptil(int modo_criacao);

	public:
		Controle();
		Controle(map<int, Animal> a, map<int, Funcionario> f);
		~Controle();
		
		int is_number(char * number);
		
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