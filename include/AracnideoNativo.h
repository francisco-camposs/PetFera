#ifndef _ARACNIDEONATIVO_H_
#define _ARACNIDEONATIVO_H_

#include "Aracnideo.h"
#include "AnimalNativo.h"

using namespace std;

class AracnideoNativo : public Aracnideo, public AnimalNativo {
	public:
		AracnideoNativo();
		AracnideoNativo(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas, 
				string tipo_veneno, int day, int month, int year, string autorizacao_ibama, 
				string uf_origem);
		~AracnideoNativo();

		void set_autorizacao_ibama(string autorizacao_ibama);
		void write();
		string Tipo();
};

#endif