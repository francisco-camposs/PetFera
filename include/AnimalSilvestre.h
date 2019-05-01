#ifndef _ANIMALSILVESTRE_H_
#define _ANIMALSILVESTRE_H_

#include <string>

using namespace std;

class AnimalSilvestre {
	protected:
  		string m_autorizacao;
  	public:
  		AnimalSilvestre();
  		AnimalSilvestre(string autorizacao);
  		~AnimalSilvestre();

  		void set_autorizacao(string autorizacao);
  		string get_autorizacao();
};

#endif