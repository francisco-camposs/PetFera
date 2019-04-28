#ifndef _MAMIFERONATIVO_H
#define _MAMIFERONATIVO_H

#include "mamifero.h"

using namespace std;

class MamiferoNativo : public Mamifero{
public:
	MamiferoNativo();
	MamiferoNativo(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string cor_do_pelo);
	~MamiferoNativo();

};

#endif