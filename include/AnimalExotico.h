#ifndef _ANIMALEXOTICO_H_
#define _ANIMALEXOTICO_H_

#include "AnimalSilvestre.h"
#include <string>

using namespace std;

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;
		string m_autorizacao;
	public:
		AnimalExotico();
		AnimalExotico(string autorizacao_ibama, string pais_origem, string autorizacao);
		~AnimalExotico();

		void set_pais_origem(string pais_origem);
		void set_autorizacao(string autorizacao);
		virtual void set_autorizacao_ibama(string autorizacao_ibama) = 0;
		string get_pais_origem();
		string get_autorizacao();
};

#endif