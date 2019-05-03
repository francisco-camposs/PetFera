#ifndef _ANIMALNATIVO_H_
#define _ANIMALNATIVO_H_

#include "AnimalSilvestre.h"
#include <string>

using namespace std;

class AnimalNativo : public AnimalSilvestre {
	protected:
		string m_uf_origem;
		string m_autorizacao;
	public:
		AnimalNativo();
		AnimalNativo(string autorizacao_ibama, string uf_origem, string autorizacao);
		~AnimalNativo();

		void set_uf_origem(string uf_origem);
		void set_autorizacao(string autorizacao);
		virtual void set_autorizacao_ibama(string autorizacao_ibama) = 0;
		string get_uf_origem();
		string get_autorizacao();
};

#endif