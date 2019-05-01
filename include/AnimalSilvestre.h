#ifndef _ANIMALSILVESTRE_H_
#define _ANIMALSILVESTRE_H_

#include <string>

using namespace std;

class AnimalSilvestre {
	protected:
  		string m_autorizacao_ibama;
  	public:
  		AnimalSilvestre();
  		AnimalSilvestre(string autorizacao_ibama);
  		~AnimalSilvestre();

  		void set_autorizacao_ibama(string autorizacao_ibama);
  		string get_autorizacao_ibama();
};

#endif