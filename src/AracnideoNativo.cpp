#include "AracnideoNativo.h"

AracnideoNativo::AracnideoNativo() {

};

AracnideoNativo::AracnideoNativo(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
			int day, int month, int year, string autorizacao_ibama, string uf_origem, string autorizacao):
	Aracnideo(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year), 
	AnimalNativo(autorizacao_ibama, uf_origem, autorizacao) {

};

AracnideoNativo::~AracnideoNativo() {

};