#ifndef _ANFIBIOEXOTICO_H
#define _ANFIBIOEXOTICO_H

#include "Anfibio.h"
#include "AnimalExotico.h"

using namespace std;

class AnfibioExotico : public Anfibio, public AnimalExotico {
public:
	AnfibioExotico();
	AnfibioExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year, string autorizacao_ibama, string pais_origem, string autorizacao);
	~AnfibioExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
};

#endif