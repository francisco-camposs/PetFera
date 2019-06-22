#ifndef _INSETONATIVO_H_
#define _INSETONATIVO_H_

#include "Inseto.h"
#include "AnimalNativo.h"

using namespace std;

class InsetoNativo : public Inseto, public AnimalNativo {
  public:
	InsetoNativo();
	InsetoNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, 
			string tipo_metamorfose, int day, int month, int year, string autorizacao_ibama, 
			string uf_origem);
	~InsetoNativo();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
  private:
	ostream& print(ostream& os)const;
};

#endif