#ifndef _MAMIFERODOMESTICO_H
#define _MAMIFERODOMESTICO_H

#include "Mamifero.h"
#include "AnimalDomestico.h"

using namespace std;

class MamiferoDomestico : public Mamifero, public AnimalDomestico{
public:
	MamiferoDomestico();
	MamiferoDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string cor_do_pelo);
	~MamiferoDomestico();

	string write();
	string Tipo();
private:
	ostream& print(ostream& os)const;
};

#endif