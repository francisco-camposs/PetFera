#ifndef _TRATAMENTO_H_
#define _TRATAMENTO_H_

#include <string>
#include <iostream>
#include <memory>
#include "AnfibioDomestico.h"
#include "AnfibioExotico.h"
#include "AnfibioNativo.h"
#include "AveDomestica.h"
#include "AveExotica.h"
#include "AveNativa.h"
#include "MamiferoDomestico.h"
#include "MamiferoExotico.h"
#include "MamiferoNativo.h"
#include "ReptilDomestico.h"
#include "ReptilExotico.h"
#include "ReptilNativo.h"
#include "Tratador.h"
#include "Veterinario.h"

using namespace std;

class Tratamento{
	private:

	public:
		shared_ptr<Animal> Tratamento_Construtor_Animal(string line);
		shared_ptr<Animal> Tratamento_AnfibioDomestico(string line);
		shared_ptr<Animal> Tratamento_AnfibioExotico(string line);
		shared_ptr<Animal> Tratamento_AnfibioNativo(string line);
		shared_ptr<Animal> Tratamento_AveDomestica(string line);
		shared_ptr<Animal> Tratamento_AveExotica(string line);
		shared_ptr<Animal> Tratamento_AveNativa(string line);
		shared_ptr<Animal> Tratamento_MamiferoDomestico(string line);
		shared_ptr<Animal> Tratamento_MamiferoExotico(string line);
		shared_ptr<Animal> Tratamento_MamiferoNativo(string line);
		shared_ptr<Animal> Tratamento_ReptilDomestico(string line);
		shared_ptr<Animal> Tratamento_ReptilExotico(string line);
		shared_ptr<Animal> Tratamento_ReptilNativo(string line);

		shared_ptr<Funcionario> Tratamento_Construtor_Funcionario(string line);
		shared_ptr<Funcionario> Tratamento_Tratador(string line);
		shared_ptr<Funcionario> Tratamento_Veterinario(string line);

		string * Tratamento_Data(string line);


};

#endif