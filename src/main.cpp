#include <iostream>
#include "Mamifero.h"
#include "Anfibio.h"
#include "Aracnideo.h"
#include "AveNativa.h"

using namespace std;

int main (){

	Tratador tratador(12, "Cleber", "Antonio", 23, 10, '-', "a", 6);
	Veterinario veterinario(34, "Araujo", "hcghg", 65, 12, '-', "Libra", "LVM");

	// Mamifero Cachorro (5, "Cachorro", "Dog", 'M', 3000, "Carne", &veterinario, &tratador, "Cleber", "Negrão");
	Aracnideo Tarantula(20, "Arachnida", "Brachypelma smithi", 'F', 60, "Carnivora", &veterinario, &tratador, "Fofinha", 3, "Neurotoxina", 04, 02, 2018);

	AveNativa Arara(22, "Aves", "Anodorhynchus", 'M', 0.6, "Hebívoro", &veterinario, &tratador, "Blue", 2.5, 15, "ibm-340", "Amazonas", "sf234");
	// cout << "id: " <<  Cachorro.get_m_id() << endl;
	// cout << "classe: "<<  Cachorro.get_m_classe() << endl;
	// cout << "nome_cientifico: "<<  Cachorro.get_m_nome_cientifico() << endl;
	// cout << "sexo: "<< Cachorro.get_m_sexo() << endl;
	// cout << "tamanho: "<<  Cachorro.get_m_tamanho() << endl;
	// cout << "dieta: "<<  Cachorro.get_m_dieta() << endl;
	// cout << "\n\n";

	// cout << "Tratador: " << endl;
	// cout << "m_id: " <<  Cachorro.get_m_tratador().get_id() << endl;
	// cout << "m_nome: "<<  Cachorro.get_m_tratador().get_nome() << endl;
	// cout << "m_cpf: "<<  Cachorro.get_m_tratador().get_cpf() << endl;
	// cout << "m_idade: "<< Cachorro.get_m_tratador().get_idade() << endl;
	// cout << "m_tipo_sanguineo: "<<  Cachorro.get_m_tratador().get_tipo_sanguineo() << endl;
	// cout << "m_fator_rh: "<<  Cachorro.get_m_tratador().get_fator_rh() << endl;
	// cout << "m_especialidade: " << Cachorro.get_m_tratador().get_especialidade() << endl;
	// cout << "get_nivel_de_seguranca: " << Cachorro.get_m_tratador().get_nivel_de_seguranca() << endl;
	// cout << "\n\n";

	// cout << "Veterinario: " << endl;
	// cout << "m_id: " <<  Cachorro.get_m_veterinario().get_id() << endl;
	// cout << "m_nome: "<<  Cachorro.get_m_veterinario().get_nome() << endl;
	// cout << "m_cpf: "<<  Cachorro.get_m_veterinario().get_cpf() << endl;
	// cout << "m_idade: "<< Cachorro.get_m_veterinario().get_idade() << endl;
	// cout << "m_tipo_sanguineo: "<<  Cachorro.get_m_veterinario().get_tipo_sanguineo() << endl;
	// cout << "m_fator_rh: "<<  Cachorro.get_m_veterinario().get_fator_rh() << endl;
	// cout << "m_especialidade: " << Cachorro.get_m_veterinario().get_especialidade() << endl;
	// cout << "m_crmv: " << Cachorro.get_m_veterinario().get_crmv() << endl;
	// cout << "\n\n";

	// cout << "m_nome_batismo: "<<  Cachorro.get_m_nome_batismo() << endl;
	// cout << "m_cor_do_pelo: "<<  Cachorro.get_m_cor_do_pelo() << endl;

	cout << "id: " <<  Tarantula.get_m_id() << endl;
	cout << "classe: "<<  Tarantula.get_m_classe() << endl;
	cout << "nome_cientifico: "<<  Tarantula.get_m_nome_cientifico() << endl;
	cout << "sexo: "<< Tarantula.get_m_sexo() << endl;
	cout << "tamanho: "<<  Tarantula.get_m_tamanho() << endl;
	cout << "dieta: "<<  Tarantula.get_m_dieta() << endl;
	cout << "\n\n";

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

	cout << "m_nome_batismo: "<<  Tarantula.get_m_nome_batismo() << endl;
	cout << "tipo_veneno: "<<  Tarantula.get_tipo_veneno() << endl;
	cout << "total_de_mudas: " << Tarantula.get_total_de_mudas() << endl << endl;

	Arara.set_m_id(45);
	Arara.set_autorizacao_ibama("ibm-23034");
	cout << "m_nome_batismo: "<<  Arara.get_m_nome_batismo() << endl;
	cout<<"autorizacao do ibama: "<< Arara.get_autorizacao_ibama()<<endl;
	cout<<"UF de origem: "<< Arara.get_uf_origem() << endl;
	cout<<"autorizacao: "<< Arara.get_autorizacao() << endl << endl;

	Tarantula.write();
	return 0;
}