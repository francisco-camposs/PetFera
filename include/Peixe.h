#ifndef _PEIXE_H
#define _PEIXE_H

#include "Animal.h"

using namespace std;

class Peixe : public Animal{
  protected:
	string m_tipo_agua;
  public:
	Peixe();
	Peixe(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, string tipo_agua);
	~Peixe();

	void set_tipo_agua(string tipo_agua);
	string get_tipo_agua();
	string write();
	string Tipo();
	void inicializar_animal(int id);
  private:
	ostream& print(ostream& os)const;
};

#endif