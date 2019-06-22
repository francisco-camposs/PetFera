#ifndef _INSETODOMESTICO_H
#define _INSETODOMESTICO_H

#include "Inseto.h"
#include "AnimalDomestico.h"

using namespace std;

class InsetoDomestico : public Inseto, public AnimalDomestico {
public:
	InsetoDomestico();
	InsetoDomestico(int id, string nome_cientifico, char sexo,
			double tamanho, string dieta, Veterinario* veterinario,
			Tratador* tratador, string nome_batismo, int total_de_mudas, 
			string tipo_metamorfose, int day, int month, int year);
	~InsetoDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
private:
	ostream& print(ostream& os)const;
};

#endif