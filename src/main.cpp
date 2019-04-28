#include <iostream>
#include "Animal.h"
#include "Mamifero.h"
#include "Anfibio.h"

using namespace std;

int main (){

	Tratador tratador(12, "Cleber", "Antonio", 23, 10, '-', "a", 6);
	Veterinario veterinario(34, "Araujo", "hcghg", 0, 0, '-', "Libra", "LVM");

	cout << "Tratador: " << endl;
	cout << "m_id: " <<  tratador.get_id() << endl;
	cout << "m_nome: "<<  tratador.get_nome() << endl;
	cout << "m_cpf: "<<  tratador.get_cpf() << endl;
	cout << "m_idade: "<< tratador.get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  tratador.get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  tratador.get_fator_rh() << endl;
	cout << "m_especialidade: " << tratador.get_especialidade() << endl;
	cout << "get_nivel_de_seguranca: " << tratador.get_nivel_de_seguranca() << endl;
	cout << "\n\n";

	cout << "Veterinario: " << endl;
	cout << "m_id: " <<  veterinario.get_id() << endl;
	cout << "m_nome: "<<  veterinario.get_nome() << endl;
	cout << "m_cpf: "<<  veterinario.get_cpf() << endl;
	cout << "m_idade: "<< veterinario.get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  veterinario.get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  veterinario.get_fator_rh() << endl;
	cout << "m_especialidade: " << veterinario.get_especialidade() << endl;
	cout << "get_crmv: " << veterinario.get_crmv() << endl;
	cout << "\n\n";


	Animal Andorinha (5, "Mamalia", "Ornitorrinco", 'M', 3000, "Carne", &veterinario, &tratador, "Cleber");

	cout << "id: " <<  Andorinha.get_m_id() << endl;
	cout << "classe: "<<  Andorinha.get_m_classe() << endl;
	cout << "nome_cientifico: "<<  Andorinha.get_m_nome_cientifico() << endl;
	cout << "sexo: "<< Andorinha.get_m_sexo() << endl;
	cout << "tamanho: "<<  Andorinha.get_m_tamanho() << endl;
	cout << "dieta: "<<  Andorinha.get_m_dieta() << endl;
	cout << "\n\n";

	cout << "Tratador: " << endl;
	cout << "m_id: " <<  Andorinha.get_m_Tratador().get_id() << endl;
	cout << "m_nome: "<<  Andorinha.get_m_Tratador().get_nome() << endl;
	cout << "m_cpf: "<<  Andorinha.get_m_Tratador().get_cpf() << endl;
	cout << "m_idade: "<< Andorinha.get_m_Tratador().get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  Andorinha.get_m_Tratador().get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  Andorinha.get_m_Tratador().get_fator_rh() << endl;
	cout << "m_especialidade: " << Andorinha.get_m_Tratador().get_especialidade() << endl;
	cout << "get_nivel_de_seguranca: " << Andorinha.get_m_Tratador().get_nivel_de_seguranca() << endl;
	cout << "\n\n";

	cout << "Veterinario: " << endl;
	cout << "m_id: " <<  Andorinha.get_m_veterinario().get_id() << endl;
	cout << "m_nome: "<<  Andorinha.get_m_veterinario().get_nome() << endl;
	cout << "m_cpf: "<<  Andorinha.get_m_veterinario().get_cpf() << endl;
	cout << "m_idade: "<< Andorinha.get_m_veterinario().get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  Andorinha.get_m_veterinario().get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  Andorinha.get_m_veterinario().get_fator_rh() << endl;
	cout << "m_especialidade: " << Andorinha.get_m_veterinario().get_especialidade() << endl;
	cout << "m_crmv: " << Andorinha.get_m_veterinario().get_crmv() << endl;
	cout << "\n\n";

	cout << "nome_batismo: "<<  Andorinha.get_m_nome_batismo() << endl;

	return 0;
}