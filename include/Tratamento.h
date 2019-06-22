#ifndef _TRATAMENTO_H_
#define _TRATAMENTO_H_

#include <string>
#include <iostream>
#include <memory>
#include "AnfibioDomestico.h"
#include "AnfibioExotico.h"
#include "AnfibioNativo.h"
#include "AracnideoDomestico.h"
#include "AracnideoExotico.h"
#include "AracnideoNativo.h"
#include "AveDomestica.h"
#include "AveExotica.h"
#include "AveNativa.h"
#include "InsetoDomestico.h"
#include "InsetoExotico.h"
#include "InsetoNativo.h"
#include "MamiferoDomestico.h"
#include "MamiferoExotico.h"
#include "MamiferoNativo.h"
#include "ReptilDomestico.h"
#include "ReptilExotico.h"
#include "ReptilNativo.h"
#include "PeixeDomestico.h"
#include "PeixeExotico.h"
#include "PeixeNativo.h"
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
		shared_ptr<Animal> Tratamento_AracnideoDomestico(string line);
		shared_ptr<Animal> Tratamento_AracnideoExotico(string line);
		shared_ptr<Animal> Tratamento_AracnideoNativo(string line);
		shared_ptr<Animal> Tratamento_AveDomestica(string line);
		shared_ptr<Animal> Tratamento_AveExotica(string line);
		shared_ptr<Animal> Tratamento_AveNativa(string line);
		shared_ptr<Animal> Tratamento_InsetoDomestico(string line);
		shared_ptr<Animal> Tratamento_InsetoExotico(string line);
		shared_ptr<Animal> Tratamento_InsetoNativo(string line);
		shared_ptr<Animal> Tratamento_MamiferoDomestico(string line);
		shared_ptr<Animal> Tratamento_MamiferoExotico(string line);
		shared_ptr<Animal> Tratamento_MamiferoNativo(string line);
		shared_ptr<Animal> Tratamento_ReptilDomestico(string line);
		shared_ptr<Animal> Tratamento_ReptilExotico(string line);
		shared_ptr<Animal> Tratamento_ReptilNativo(string line);
		shared_ptr<Animal> Tratamento_PeixeDomestico(string line);
		shared_ptr<Animal> Tratamento_PeixeExotico(string line);
		shared_ptr<Animal> Tratamento_PeixeNativo(string line);

		shared_ptr<Funcionario> Tratamento_Construtor_Funcionario(string line);
		shared_ptr<Funcionario> Tratamento_Tratador(string line);
		shared_ptr<Funcionario> Tratamento_Veterinario(string line);

		string * Tratamento_Data(string line);


};

#endif