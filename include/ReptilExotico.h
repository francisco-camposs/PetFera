#ifndef _REPTILEXOTICO_H
#define _REPTILEXOTICO_H

#include "Reptil.h"

class ReptilExotico : public Reptil{
public:
	ReptilExotico();
	ReptilExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno);
	~ReptilExotico();
};

#endif