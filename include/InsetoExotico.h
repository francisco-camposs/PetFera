#ifndef _INSETOEXOTICO_H_
#define _INSETOEXOTICO_H_

#include "Inseto.h"
#include "AnimalExotico.h"

using namespace std;

class InsetoExotico : public Inseto, AnimalExotico {
	public:
		InsetoExotico();
		InsetoExotico(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas, 
				string tipo_metamorfose, int day, int month, int year, string autorizacao_ibama, 
				string pais_origem, string autorizacao);
		~InsetoExotico();
};

#endif