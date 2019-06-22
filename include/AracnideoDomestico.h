#ifndef _ARACNIDEODOMESTICO_H
#define _ARACNIDEODOMESTICO_H

#include "Aracnideo.h"
#include "AnimalDomestico.h"

using namespace std;

class AracnideoDomestico : public Aracnideo, public AnimalDomestico {
  public:
	AracnideoDomestico();
	AracnideoDomestico(int id, string nome_cientifico, char sexo,
			double tamanho, string dieta, Veterinario* veterinario,
			Tratador* tratador, string nome_batismo, int total_de_mudas,
			string tipo_veneno, int day, int month, int year);
	~AracnideoDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
  private:
	ostream& print(ostream& os)const;
};

#endif