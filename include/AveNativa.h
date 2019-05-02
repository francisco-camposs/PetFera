#ifndef _AVENATIVA_H
#define _AVENATIVA_H

#include "Ave.h"
#include "AnimalNativo.h"

using namespace std;

class AveNativa : public Ave, AnimalNativo{
public:
	AveNativa();
	AveNativa(int id, string classe, string nome_cientifico, char sexo,
			double tamanho, string dieta, Veterinario* veterinario,
			Tratador* tratador, string nome_batismo, double tamanho_do_bico,
			double envergadura_das_asas, string autorizacao_ibama, string uf_origem, string autorizacao);
	~AveNativa();
};

#endif