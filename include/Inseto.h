#ifndef _INSETO_H_
#define _INSETO_H_

#include "Animal.h"
#include "date.h"

using namespace std;

class Inseto : public Animal {
	protected:
		int m_total_de_mudas;
		string m_tipo_metamorfose;
		date m_ultima_muda;
	public:
		Inseto();
		Inseto(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, Veterinario* veterinario, 
				Tratador* tratador, string nome_batismo, int total_de_mudas, 
				string tipo_metamorfose, int day, int month, int year);
		~Inseto();

		void set_tipo_metamorfose(string tipo_metamorfose);
		void set_total_de_mudas(int total_de_mudas);
		void set_ultima_muda(date ultima_muda);
		string get_tipo_metamorfose();
		int get_total_de_mudas();
		date get_ultima_muda();
		string write();
		string Tipo();
	private:
		ostream& print(ostream& os)const;
};

#endif