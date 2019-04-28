#ifndef _AVEEXOTICA_H
#define _AVEEXOTICA_H

#include "Ave.h"

using namespace std;

class AveExotica : public Ave{
public:
	AveExotica();
	AveExotica(int id, string classe, string nome_cientifico, char sexo,
			double tamanho, string dieta, Veterinario* veterinario,
			Tratador* tratador, string nome_batismo, double tamanho_do_bico,
			double envergadura_das_asas);
	~AveExotica();
};

#endif