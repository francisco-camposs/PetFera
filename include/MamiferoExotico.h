#ifndef _MAMIFEROEXOTICO_H
#define _MAMIFEROEXOTICO_H

#include "Mamifero.h"

using namespace std;

class MamiferoExotico : public Mamifero{
public:
	MamiferoExotico();
	MamiferoExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string cor_do_pelo);
	~MamiferoExotico();

};

#endif