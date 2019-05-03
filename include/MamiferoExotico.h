#ifndef _MAMIFEROEXOTICO_H
#define _MAMIFEROEXOTICO_H

#include "Mamifero.h"
#include "AnimalExotico.h"

using namespace std;

class MamiferoExotico : public Mamifero, public AnimalExotico {
public:
	MamiferoExotico();
	MamiferoExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string cor_do_pelo,
				string autorizacao_ibama, string pais_origem, string autorizacao);
	~MamiferoExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
};

#endif