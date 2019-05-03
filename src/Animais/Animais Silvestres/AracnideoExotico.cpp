#include "AracnideoExotico.h"

AracnideoExotico::AracnideoExotico() {

};

AracnideoExotico::AracnideoExotico(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
			int day, int month, int year, string autorizacao_ibama, string pais_origem, string autorizacao):
	Aracnideo(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year), 
	AnimalExotico(autorizacao_ibama, pais_origem, autorizacao) {

};

AracnideoExotico::~AracnideoExotico() {

};

void AracnideoExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};