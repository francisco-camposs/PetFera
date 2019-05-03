#ifndef _PEIXEEXOTICO_H
#define _PEIXEEXOTICO_H

#include "Peixe.h"
#include "AnimalExotico.h"

class PeixeExotico : public Peixe, public AnimalExotico {
public:
	PeixeExotico();
	PeixeExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string tipo_agua, 
				string autorizacao_ibama, string pais_origem, string autorizacao);
	~PeixeExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
};

#endif