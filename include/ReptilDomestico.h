#ifndef _REPTILDOMESTICO_H
#define _REPTILDOMESTICO_H

#include "Reptil.h"
#include "AnimalDomestico.h"

class ReptilDomestico : public Reptil, public AnimalDomestico {
public:
	ReptilDomestico();
	ReptilDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno);
	~ReptilDomestico();

	string write();
	string Tipo();
private:
	ostream& print(ostream& os)const;
};

#endif