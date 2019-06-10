#ifndef _REPTILEXOTICO_H
#define _REPTILEXOTICO_H

#include "Reptil.h"
#include "AnimalExotico.h"

class ReptilExotico : public Reptil, public AnimalExotico {
public:
	ReptilExotico();
	ReptilExotico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
	~ReptilExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
private:
	ostream& print(ostream& os)const;
};

#endif