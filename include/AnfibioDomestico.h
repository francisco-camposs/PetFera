#ifndef _ANFIBIODOMESTICO_H
#define _ANFIBIODOMESTICO_H

#include "Anfibio.h"
#include "AnimalDomestico.h"

using namespace std;

class AnfibioDomestico : public Anfibio, public AnimalDomestico {
public:
	AnfibioDomestico();
	AnfibioDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year);
	~AnfibioDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
private:
	ostream& print(ostream& os)const;
};

#endif