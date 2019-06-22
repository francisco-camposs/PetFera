#ifndef _ARACNIDEOEXOTICO_H_
#define _ARACNIDEOEXOTICO_H_

#include "Aracnideo.h"
#include "AnimalExotico.h"

using namespace std;

class AracnideoExotico : public Aracnideo, public AnimalExotico {
  public:
	AracnideoExotico();
	AracnideoExotico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, 
			string tipo_veneno, int day, int month, int year, string autorizacao_ibama, 
			string pais_origem, string cidade_origem);
	~AracnideoExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
  private:
	ostream& print(ostream& os)const;
};

#endif