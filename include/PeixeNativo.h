#ifndef _PEIXENATIVO_H
#define _PEIXENATIVO_H

#include "Peixe.h"
#include "AnimalNativo.h"

class PeixeNativo : public Peixe, public AnimalNativo {
  public:
	PeixeNativo();
	PeixeNativo(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string tipo_agua, 
				string autorizacao_ibama, string uf_origem);
	~PeixeNativo();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
  private:
	ostream& print(ostream& os)const;
};

#endif