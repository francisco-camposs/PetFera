#include "AnfibioExotico.h"

AnfibioExotico::AnfibioExotico(){

}
AnfibioExotico::AnfibioExotico(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas,
			int day, int month, int year):
	Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, day, month, year){

}
AnfibioExotico::~AnfibioExotico(){}