#ifndef _REPTILNATIVO_H
#define _REPTILNATIVO_H

#include "Reptil.h"
#include "AnimalNativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
public:
	ReptilNativo();
	ReptilNativo(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno, string autorizacao_ibama, string uf_origem);
	~ReptilNativo();

	void set_autorizacao_ibama(string autorizacao_ibama);
	void write();
	string Tipo();
};

#endif