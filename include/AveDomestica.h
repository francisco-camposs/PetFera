#ifndef _AVEDOMESTICA_H
#define _AVEDOMESTICA_H

#include "Ave.h"
#include "AnimalDomestico.h"

using namespace std;

class AveDomestica : public Ave, public AnimalDomestico {
public:
	AveDomestica();
	AveDomestica(int id, string nome_cientifico, char sexo,
			double tamanho, string dieta, Veterinario* veterinario,
			Tratador* tratador, string nome_batismo, double tamanho_do_bico,
			double envergadura_das_asas);
	~AveDomestica();

	string write();
	string Tipo();
	void inicializar_animal(int id);
private:
	ostream& print(ostream& os)const;
};

#endif