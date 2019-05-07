#ifndef _REPTILEXOTICO_H
#define _REPTILEXOTICO_H

#include "Reptil.h"
#include "AnimalExotico.h"

class ReptilExotico : public Reptil, public AnimalExotico {
public:
	ReptilExotico();
	ReptilExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno, string autorizacao_ibama, string pais_origem, string autorizacao);
	~ReptilExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	void write();
};

#endif