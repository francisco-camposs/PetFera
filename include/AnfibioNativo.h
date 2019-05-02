#ifndef _ANFIBIONATIVO_H
#define _ANFIBIONATIVO_H

#include "Anfibio.h"
#include "AnimalNativo.h"

using namespace std;

class AnfibioNativo : public Anfibio, AnimalNativo {
public:
	AnfibioNativo();
	AnfibioNativo(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year, string autorizacao_ibama, string uf_origem, string autorizacao);
	~AnfibioNativo();
};

#endif