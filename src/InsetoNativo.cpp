#include "InsetoNativo.h"

InsetoNativo::InsetoNativo() {

};

InsetoNativo::InsetoNativo(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, string tipo_metamorfose, 
			int day, int month, int year, string autorizacao_ibama, string uf_origem, string autorizacao):
	Inseto(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_metamorfose, day, month, year), 
	AnimalNativo(autorizacao_ibama, uf_origem, autorizacao) {

};

InsetoNativo::~InsetoNativo() {

};