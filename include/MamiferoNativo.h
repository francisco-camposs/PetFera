#ifndef _MAMIFERONATIVO_H
#define _MAMIFERONATIVO_H

#include "Mamifero.h"
#include "AnimalNativo.h"

using namespace std;

class MamiferoNativo : public Mamifero, public AnimalNativo {
public:
	MamiferoNativo();
	MamiferoNativo(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string cor_do_pelo, 
				string autorizacao_ibama, string uf_origem);
	~MamiferoNativo();

	void set_autorizacao_ibama(string autorizacao_ibama);
	void write();
};

#endif