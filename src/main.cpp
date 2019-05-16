#include <iostream>
#include "AnfibioExotico.h"
#include "AnfibioNativo.h"
#include "AracnideoExotico.h"
#include "AracnideoNativo.h"
#include "AveExotica.h"
#include "AveNativa.h"
#include "InsetoExotico.h"
#include "InsetoNativo.h"
#include "MamiferoExotico.h"
#include "MamiferoNativo.h"
#include "PeixeExotico.h"
#include "PeixeNativo.h"
#include "ReptilExotico.h"
#include "ReptilNativo.h"

using namespace std;

int main (){

	Tratador tratador(12, "Cleber", "Antonio", 23, 10, '-', "a", 6);
	Veterinario veterinario(34, "Araujo", "hcghg", 65, 12, '-', "Libra", "LVM");

	Mamifero Cachorro (5, "Cachorro", "Dog", 'M', 3000, "Carne", &veterinario, &tratador, "Cleber", "Preto");
	
	Aracnideo Tarantula(20, "Arachnida", "Brachypelma smithi", 'F', 60, "Carnivora", &veterinario, &tratador, "Fofinha", 3, "Neurotoxina", 04, 02, 2018);

	AveNativa Arara(22, "Aves", "Anodorhynchus", 'F', 0.6, "Hebívoro", &veterinario, &tratador, "Blue", 2.5, 15, "ibm-340", "Amazonas");
	
	Anfibio Sapo(23, "Amphibia", "Bufo bufo", 'M', 1, "Insetos", &veterinario, &tratador, "Kermit", 3, 03, 04, 2019);

	cout << "Tratador: " << endl;
	cout << "m_id: " <<  Tarantula.get_m_tratador().get_id() << endl;
	cout << "m_nome: "<<  Tarantula.get_m_tratador().get_nome() << endl;
	cout << "m_cpf: "<<  Tarantula.get_m_tratador().get_cpf() << endl;
	cout << "m_idade: "<< Tarantula.get_m_tratador().get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  Tarantula.get_m_tratador().get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  Tarantula.get_m_tratador().get_fator_rh() << endl;
	cout << "m_especialidade: " << Tarantula.get_m_tratador().get_especialidade() << endl;
	cout << "get_nivel_de_seguranca: " << Tarantula.get_m_tratador().get_nivel_de_seguranca() << endl;
	cout << "\n\n";

	cout << "Veterinario: " << endl;
	cout << "m_id: " <<  Tarantula.get_m_veterinario().get_id() << endl;
	cout << "m_nome: "<<  Tarantula.get_m_veterinario().get_nome() << endl;
	cout << "m_cpf: "<<  Tarantula.get_m_veterinario().get_cpf() << endl;
	cout << "m_idade: "<< Tarantula.get_m_veterinario().get_idade() << endl;
	cout << "m_tipo_sanguineo: "<<  Tarantula.get_m_veterinario().get_tipo_sanguineo() << endl;
	cout << "m_fator_rh: "<<  Tarantula.get_m_veterinario().get_fator_rh() << endl;
	cout << "m_especialidade: " << Tarantula.get_m_veterinario().get_especialidade() << endl;
	cout << "m_crmv: " << Tarantula.get_m_veterinario().get_crmv() << endl;
	cout << "\n\n";

	Tarantula.write();
	cout<<endl;
	Cachorro.write();
	cout<<endl;
	Arara.write();
	cout<<endl;
	Sapo.write();
	return 0;
}