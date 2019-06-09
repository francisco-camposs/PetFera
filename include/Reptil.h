#ifndef _REPTIL_H
#define _REPTIL_H

#include "Animal.h"

using namespace std;

class Reptil : public Animal{
protected:
	bool m_venenoso;
	string m_tipo_veneno;
public:
	Reptil();
	Reptil(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, bool venenoso,
				string tipo_veneno);
	~Reptil();

	void set_venenoso(bool venenoso);
	void set_tipo_veneno(string tipo_veneno);
	bool get_venenoso();
	string get_tipo_veneno();
	string write();
	string Tipo();
};

#endif