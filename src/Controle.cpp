#include "Controle.h" 

using namespace std;

Controle::Controle(){
	ifstream archive;
	archive.open("data/Animais.csv");

	if(!(archive.is_open())){
		return;
	}

	string line;
	getline(archive, line);
	shared_ptr<Animal> bicho;
	while(getline(archive, line)){
		bicho = tratamento.Tratamento_Construtor(line);
	}

	archive.close();
};

Controle::Controle(map<int, Animal>, map<int, Funcionario>){}
Controle::~Controle(){}

// Métodos privados para validar tipos
int Controle::is_number(char * number){
	int i = 0;
	while(number[i] != '\0'){
		if ((number[i] < 48 || number[i] > 57)){

			i = 0;
			cout << "Isso não é um número, tente novamente: " << endl;
			cin.clear();
			cin.getline(number,20);
		}
		i++;
	}
	return stoi(number);
};

void Controle::criar_animal(shared_ptr<Animal> &bicho, string classe){
	shared_ptr<Veterinario> vet(new Veterinario);
	shared_ptr<Tratador> trat(new Tratador);

	char * valor = new char;
	string nome;
	string nome_cientifico;
	char * sexo = new char;
	double tam;
	string dieta;

	// void set_m_nome_batismo(string nome_batismo);

	bicho->set_m_id(animais_m.size());
	bicho->set_m_classe(classe);

	cout << "Digite o nome cientifico: " << endl;
	cin.clear();
	cin.getline(valor,100);
	nome_cientifico = static_cast<string>(valor);
	bicho->set_m_nome_cientifico(nome_cientifico);


	cout << "Digite o sexo do animal, M para macho e F para femea: " << endl;
	cin.clear();
	cin.getline(sexo,20);

	while(*sexo != 'F' && *sexo != 'M'){
		cout << "Sexo inválido, digite novamente: " << endl;
		cin.clear();
		cin.getline(sexo,20);;
	}
	cout << "Sexo: " << *sexo << endl;
	bicho->set_m_sexo(*sexo);


	cout << "Digite o tamanho do animal: " << endl;
	cin.clear();
	cin.getline(valor, 30);
	tam = is_number(valor);
	bicho->set_m_tamanho(tam);

	cout << "Digite a dieta do animal: " << endl;
	cin.clear();
	cin.getline(valor,200);
	dieta = static_cast<string>(valor);
	bicho->set_m_dieta(dieta);

	cout << "Por enquanto serão uns veterinários genéricos." << endl;
	bicho->set_m_veterinario((vet.get()));
	bicho->set_m_tratador(trat.get());

	cout << "Digite a o nome de batismo do animal: " << endl;
	cin.clear();
	cin.getline(valor,50);
	nome = static_cast<string>(valor);
	bicho->set_m_nome_batismo(nome);
};

void Controle::criar_animal_nativo(shared_ptr<AnimalNativo> &bicho){
	char * valor = new char;
	string autorizacao_ibama;
	string uf_origem;

	cout << "Digite a autorização do Ibama: " << endl;
	cin.clear();
	cin.getline(valor,50);
	autorizacao_ibama = static_cast<string>(valor);
	bicho->set_autorizacao_ibama(autorizacao_ibama);

	cout << "Digite a UF de origem: " << endl;
	cin.clear();
	cin.getline(valor,50);
	uf_origem = static_cast<string>(valor);
	bicho->set_uf_origem(uf_origem);
};

void Controle::criar_animal_exotico(shared_ptr<AnimalExotico> &bicho){
	char * valor = new char;
	string autorizacao_ibama;
	string pais_origem;
	string cidade_origem;

	cout << "Digite a autorização do Ibama: " << endl;
	cin.clear();
	cin.getline(valor,50);
	autorizacao_ibama = static_cast<string>(valor);
	bicho->set_autorizacao_ibama(autorizacao_ibama);

	cout << "Digite o país de origem: " << endl;
	cin.clear();
	cin.getline(valor,50);
	pais_origem = static_cast<string>(valor);
	bicho->set_pais_origem(pais_origem);

	cout << "Digite a cidade de origem: " << endl;
	cin.clear();
	cin.getline(valor,50);
	cidade_origem = static_cast<string>(valor);
	bicho->set_cidade_origem(cidade_origem);
};

void Controle::criar_ave(int modo_criacao){
	
	char * valor = new char;
	double tamanho_bico;
	double envergadura_asas;

	cout << "Digite o tamanho do bico: " << endl;
	cin.clear();
	cin.getline(valor,50);
	tamanho_bico = is_number(valor);

	cout << "Digite a envergadura das asas: " << endl;
	cin.clear();
	cin.getline(valor,50);
	envergadura_asas = is_number(valor);


	if(modo_criacao == 1){
		shared_ptr<AveDomestica> ave(new AveDomestica);
		ave->set_tamanho_do_bico(tamanho_bico);
		ave->set_envergadura_das_asas(envergadura_asas);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

		criar_animal(bicho, "Ave");
		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		shared_ptr<AveNativa> ave(new AveNativa);
		ave->set_tamanho_do_bico(tamanho_bico);
		ave->set_envergadura_das_asas(envergadura_asas);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);
		shared_ptr<AnimalNativo> animal_nativo = dynamic_pointer_cast<AnimalNativo>(ave);

		criar_animal(bicho, "Ave");
		criar_animal_nativo(animal_nativo);

		animais_m[animais_m.size()] = bicho;

	}

	else if(modo_criacao == 3){
		shared_ptr<AveExotica> ave(new AveExotica);
		ave->set_tamanho_do_bico(tamanho_bico);
		ave->set_envergadura_das_asas(envergadura_asas);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);
		shared_ptr<AnimalExotico> animal_exotico = dynamic_pointer_cast<AnimalExotico>(ave);
		criar_animal(bicho, "Ave");
		criar_animal_exotico(animal_exotico);
		animais_m[animais_m.size()] = bicho;

	}
};

void Controle::criar_mamifero(int modo_criacao){
	
	char * valor = new char;
	string cor;

	cout << "Digite a cor do pelo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	cor = static_cast<string>(valor);

	if(modo_criacao == 1){

		shared_ptr<MamiferoDomestico> mamifero(new MamiferoDomestico);
		mamifero->set_m_cor_do_pelo(cor);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

		criar_animal(bicho, "Mammalia");
		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		shared_ptr<MamiferoNativo> mamifero(new MamiferoNativo);
		mamifero->set_m_cor_do_pelo(cor);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);
		shared_ptr<AnimalNativo> animal_nativo = dynamic_pointer_cast<AnimalNativo>(mamifero);

		criar_animal(bicho, "Mammalia");
		criar_animal_nativo(animal_nativo);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 3){
		shared_ptr<MamiferoExotico> mamifero(new MamiferoExotico);
		mamifero->set_m_cor_do_pelo(cor);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);
		shared_ptr<AnimalExotico> animal_exotico = dynamic_pointer_cast<AnimalExotico>(mamifero);
		criar_animal(bicho, "Mammalia");
		criar_animal_exotico(animal_exotico);

		animais_m[animais_m.size()] = bicho;
	}
};

void Controle::criar_reptil(int modo_criacao){
	
	char * valor = new char;
	bool venenoso;
	string tipo_veneno;

	cout << "O Réptil é venenoso?" << endl;
	cout << "\t0 - Não" << endl << "\t1 - Sim" << endl;
	cin.clear();
	cin.getline(valor, 30);
	venenoso = is_number(valor);

	while(is_number(valor) != 0 && is_number(valor) != 1){
		cout << "Entrada inválida, digite novamente: " << endl;
		cin.clear();
		cin.getline(valor, 30);
		venenoso = is_number(valor);
	}

	if(venenoso){
		cout << "Digite o tipo de veneno: " << endl;
		cin.clear();
		cin.getline(valor, 50);
		tipo_veneno = static_cast<string>(valor);	
	}
	else 
		tipo_veneno = " - ";


	if(modo_criacao == 1){
		shared_ptr<ReptilDomestico> reptil(new ReptilDomestico);
		reptil->set_venenoso(venenoso);
		reptil->set_tipo_veneno(tipo_veneno);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);

		criar_animal(bicho, "Reptilia");
		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		shared_ptr<ReptilNativo> reptil(new ReptilNativo);
		reptil->set_venenoso(venenoso);
		reptil->set_tipo_veneno(tipo_veneno);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);
		shared_ptr<AnimalNativo> animal_nativo = dynamic_pointer_cast<AnimalNativo>(reptil);

		criar_animal(bicho, "Reptilia");
		criar_animal_nativo(animal_nativo);

		animais_m[animais_m.size()] = bicho;
	}
	else if(modo_criacao == 3){
		shared_ptr<ReptilExotico> reptil(new ReptilExotico);
		reptil->set_venenoso(venenoso);
		reptil->set_tipo_veneno(tipo_veneno);

		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);
		shared_ptr<AnimalExotico> animal_exotico = dynamic_pointer_cast<AnimalExotico>(reptil);
		criar_animal(bicho, "Reptilia");
		criar_animal_exotico(animal_exotico);

		animais_m[animais_m.size()] = bicho;
	}
};
		
void Controle::adicionar_animal(){
	TratamentoInput input;
	
	// if( animais_m.empty() ){
	// 	ofstream arq("data/Animais.csv", ios::app | ios::binary);
	// 	if(arq.bad()){
	// 		cerr<<"Arquivo nao foi aberto"<<endl;
	// 		exit(1);
	// 	}
	// 	arq<<"Id;Classe;Nome Científico;Sexo;Tamanho do Animal;Dieta;Veterinário Associado;Tratador Responsável;Nome de Batismo;Autorização do Ibama;País de Origem;Cidade de Origem;UF de Origem;Total de Mudas;Última Muda;Tamanho do Bico;Envergadura das Asas;Cor dos Pelos;Se é Venenoso;Tipo de Veneno"<<endl;
	// 	arq.close();
	// }
	int option_1;
	int option_2;
	cout << "Digite a opção desejada: " << endl;
	cout << "\t 1 - Anfibio;" << endl;
	cout << "\t 2 - Ave;" << endl;
	cout << "\t 3 - Mamifero;" << endl;
	cout << "\t 4 - Reptil;" << endl;

	option_1 = input.inputInt();

	while(option_1 < 1 || option_1 > 8){
		cout << "Esse número não é valido, tente novamente: " << endl;
		option_1 = input.inputInt();
	}

	cout << "Digite o tipo correspondente: " << endl;
	cout << "\t 1 - Domestico;" << endl;
	cout << "\t 2 - Silvestre Nativo;" << endl;
	cout << "\t 3 - Silvestre Exotico;" << endl; 

	option_2 = input.inputInt();

	while(option_2 < 1 || option_2 > 3){
		cout << "Esse número não é valido, tente novamente: " << endl;
		option_2 = input.inputInt();
	}

	if (option_1 == 1){
		if(option_2 == 1){
			shared_ptr<Animal> bicho(new AnfibioDomestico);
			bicho->inicializar_animal(animais_m.size());
			animais_m[animais_m.size()] = bicho;
		}
		if(option_2 == 2){
			shared_ptr<Animal> bicho(new AnfibioExotico);
			bicho->inicializar_animal(animais_m.size());
			animais_m[animais_m.size()] = bicho;
		}
		if(option_2 == 3){
			shared_ptr<Animal> bicho(new AnfibioNativo);
			bicho->inicializar_animal(animais_m.size());
			animais_m[animais_m.size()] = bicho;
		}
	}
	else if (option_1 == 2){
		criar_ave(option_2);
	}
	else if (option_1 == 3){
		criar_mamifero(option_2);
	}
	else if (option_1 == 4){
		criar_reptil(option_2);
	}

	ofstream arq("data/Animais.csv", ios::app | ios::binary);
	if(arq.bad()){
		cerr<<"Arquivo nao foi aberto"<<endl;
		exit(1);
	}
	arq<<animais_m[animais_m.size()-1]->write();
	arq.close();
}

void Controle::remover_animal(){

}
void Controle::alterar_animal(){

}

void Controle::consultar_animais(){
	char* valor = new char;
	int option;
	int id;
	cout << "Digite a opção desejada: " << endl;
	cout << "\t 1 - Consultar todos os animais;" << endl;
	cout << "\t 2 - Consultar animal por id;" << endl;

	cin.clear();
	cin.getline(valor,20);
	option = is_number(valor);

	while(option < 1 || option > 2){
		cout << "Esse opção não é valida, tente novamente: " << endl;
		cin.clear();
		cin.getline(valor,20);
		option = is_number(valor);
	}

	if(option == 1){
		for(auto it = animais_m.begin(); it != animais_m.end(); it++)
			cout<< *it->second << endl << endl;
	}
	else if(option == 2){
		cout << "Digite o id do animal: " << endl;
		cin.clear();
		cin.getline(valor, 50);
		id = is_number(valor);

		auto it = animais_m.find(id);
		if(it == animais_m.end())
			cout<<"Animal não encontrado"<<endl << endl; 
		else
			cout << *it->second << endl << endl;
	}
}

void Controle::consultar_animais_por_funcionario(){

}
		
void Controle::adicionar_funcionario(){
	if( funcionarios_m.empty()){
		ofstream arq("data/Funcionarios.csv", ios::app | ios::binary);
		if(arq.bad()){
			cerr<<"Arquivo nao foi aberto"<<endl;
			exit(1);
		}
		arq<<"Função;Id;Nome;CPF;Idade;Tipo Sanguineo;Fator_Rh;Especialidade;Nível de Segurança;Código CRMV"<<endl;
		arq.close();
	}

	int option_1;
	TratamentoInput input;

	cout << "Digite a opção desejada: " << endl;
	cout << "\t1 - Adicionar tratador" << endl;
	cout << "\t2 - Adicionar veterinário" << endl;

	option_1 = input.inputInt();

	while(option_1 < 1 || option_1 > 2){
		cout << "Esse número não é valido, tente novamente: " << endl;
		option_1 = input.inputInt();
	}

	if(option_1 == 1){
		shared_ptr<Funcionario> funcionario(new Tratador);
		funcionario->inicializar_funcionario(funcionarios_m.size());
		funcionarios_m[funcionarios_m.size()] = funcionario;
	}
	else if(option_1 == 2){
		shared_ptr<Funcionario> funcionario(new Veterinario);
		funcionario->inicializar_funcionario(funcionarios_m.size());
		funcionarios_m[funcionarios_m.size()] = funcionario;
	}

	ofstream arq("data/Funcionarios.csv", ios::app | ios::binary);
	if(arq.bad()){
		cerr<<"Arquivo nao foi aberto"<<endl;
		exit(1);
	}
	arq<<funcionarios_m[funcionarios_m.size()-1]->write();
	arq.close();
}

void Controle::remover_funcionario(){

}
void Controle::alterar_funcionario(){

}

void Controle::consultar_funcionario(){
	char* valor = new char;
	int option;
	int id;
	cout << "Digite a opção desejada: " << endl;
	cout << "\t 1 - Consultar todos os funcionários;" << endl;
	cout << "\t 2 - Consultar funcionário por id;" << endl;

	cin.clear();
	cin.getline(valor,20);
	option = is_number(valor);

	while(option < 1 || option > 2){
		cout << "Esse opção não é valida, tente novamente: " << endl;
		cin.clear();
		cin.getline(valor,20);
		option = is_number(valor);
	}

	if(option == 1){
		for(auto it = funcionarios_m.begin(); it != funcionarios_m.end(); it++)
			cout<< *it->second << endl << endl;
	}
	else if(option == 2){
		cout << "Digite o id do funcionario: " << endl;
		cin.clear();
		cin.getline(valor, 50);
		id = is_number(valor);

		auto it = funcionarios_m.find(id);
		if(it == funcionarios_m.end())
			cout<<"Funcionário não encontrado"<<endl << endl;
		else
			cout << *it->second << endl << endl;
	}

	delete[] valor;
}