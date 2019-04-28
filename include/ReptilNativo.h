#ifndef _REPTILNATIVO_H
#define _REPTILNATIVO_H

#include "Reptil.h"

class ReptilNativo : public Reptil{
public:
	ReptilNativo();
	ReptilNativo(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno);
	~ReptilNativo();
};

#endif