#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "Animal.h"
#include "date.h"

using namespace std;

class Anfibio : public Animal {
	protected:
		int m_total_de_mudas;
		date m_ultima_muda;
	public:
		Anfibio();
		Anfibio(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year);
		~Anfibio();

		void set_total_de_mudas(int total_de_mudas);
		void set_ultima_muda(date ultima_muda);
		int get_total_de_mudas();
		date get_ultima_mudas();
		void write();
};

#endif