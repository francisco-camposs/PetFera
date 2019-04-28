#include <iostream>
#include "Animal.h"
#include "Mamifero.h"
#include "Anfibio.h"

using namespace std;

int main (){

	Tratador tratador(12, "Cleber", "Antonio", 23, 10, '-', "a", 6);
	Veterinario veterinario(34, "Araujo", "hcghg", 65, 12, '-', "Libra", "LVM");

	Mamifero Cachorro (5, "Cachorro", "Dog", 'M', 3000, "Carne", &veterinario, &tratador, "Cleber", "Negrão");

	cout << "id: " <<  Cachorro.get_m_id() << endl;
	cout << "classe: "<<  Cachorro.get_m_classe() << endl;
	cout << "nome_cientifico: "<<  Cachorro.get_m_nome_cientifico() << endl;
	cout << "sexo: "<< Cachorro.get_m_sexo() << endl;
	cout << "tamanho: "<<  Cachorro.get_m_tamanho() << endl;
	cout << "dieta: "<<  Cachorro.get_m_dieta() << endl;
	cout << "\n\n";

	cout << "Tratador: " << endl;
	cout << "m_id: " <<  Cachorro.get_m_tratador().get_id() << endl;
	cout << "m_nome: "<<  Cachorro.get_m_tratador().get_nome() << endl;
	cout << "m_cpf: "<<  Cachorro.get_m_tratador().get_cpf() << endl;
	cout << "m_idade: "<< Cachorro.get_m_tratador().get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  Cachorro.get_m_tratador().get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  Cachorro.get_m_tratador().get_fator_rh() << endl;
	cout << "m_especialidade: " << Cachorro.get_m_tratador().get_especialidade() << endl;
	cout << "get_nivel_de_seguranca: " << Cachorro.get_m_tratador().get_nivel_de_seguranca() << endl;
	cout << "\n\n";

	cout << "Veterinario: " << endl;
	cout << "m_id: " <<  Cachorro.get_m_veterinario().get_id() << endl;
	cout << "m_nome: "<<  Cachorro.get_m_veterinario().get_nome() << endl;
	cout << "m_cpf: "<<  Cachorro.get_m_veterinario().get_cpf() << endl;
	cout << "m_idade: "<< Cachorro.get_m_veterinario().get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  Cachorro.get_m_veterinario().get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  Cachorro.get_m_veterinario().get_fator_rh() << endl;
	cout << "m_especialidade: " << Cachorro.get_m_veterinario().get_especialidade() << endl;
	cout << "m_crmv: " << Cachorro.get_m_veterinario().get_crmv() << endl;
	cout << "\n\n";

	cout << "m_nome_batismo: "<<  Cachorro.get_m_nome_batismo() << endl;
	cout << "m_cor_do_pelo: "<<  Cachorro.get_m_cor_do_pelo() << endl;

	return 0;
}