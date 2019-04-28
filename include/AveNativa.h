#ifndef _AVENATIVA_H
#define _AVENATIVA_H

#include "Ave.h"

using namespace std;

class AveNativa : public Ave{
public:
	AveNativa();
	AveNativa(int id, string classe, string nome_cientifico, char sexo,
			double tamanho, string dieta, Veterinario* veterinario,
			Tratador* tratador, string nome_batismo, double tamanho_do_bico,
			double envergadura_das_asas);
	~AveNativa();
};

#endif