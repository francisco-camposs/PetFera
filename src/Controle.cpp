#include "Controle.h"

using namespace std;

Controle::Controle(){}
Controle::Controle(map<int, Animal> a, map<int, Funcionario> f){}
Controle::~Controle(){}

// Métodos privados para validar tipos
int Controle::is_number(char * number){
	int i = 0;
	while(number[i] != '\0'){
		if (number[i] < 48 || number[i] > 57){
			i = 0;
			cout << "Isso não é um número, tente novamente: " << endl;
			cin.clear();
			cin.getline(number,20);
		}
		i++;
	}
	return stoi(number);
};

void Controle::criar_anfibio(int modo_criacao){
	shared_ptr<Veterinario> vet(new Veterinario);
	shared_ptr<Tratador> trat(new Tratador);
	
	char * valor = new char;
	string nome;
	string nome_cientifico;
	char * sexo = new char;
	double tam;
	string dieta;
	int total_mudas;
	int day;
	int month;
	int year;

	cout << "Digite o nome cientifico: " << endl;
	cin.clear();
	cin.getline(valor,100);
	nome_cientifico = static_cast<string>(valor); 


	cout << "Digite o sexo do animal, M para macho e F para femea: " << endl;
	cin.clear();
	cin.getline(sexo,20);

	while(*sexo != 'F' && *sexo != 'M'){
		cout << "Sexo inválido, digite novamente: " << endl;
		cin.clear();
		cin.getline(sexo,20);;
	}
	cout << "Sexo: " << *sexo << endl;
	

	cout << "Digite o tamanho do anfíbio: " << endl;
	cin.clear();
	cin.getline(valor, 30);
	tam = is_number(valor);


	cout << "Digite a dieta do anfíbio: " << endl;
	cin.clear();
	cin.getline(valor,200);
	dieta = static_cast<string>(valor);


	cout << "Por enquanto serão uns veterinários genéricos." << endl;


	cout << "Digite a o nome de batismo do anfíbio: " << endl;
	cin.clear();
	cin.getline(valor,50);
	nome = static_cast<string>(valor);


	cout << "Digite o número total de mudas do anfíbio: " << endl;
	cin.clear();
	cin.getline(valor,50);
	total_mudas = is_number(valor);


	cout<< "Digite a data da última muda (dd/mm/aa): " << endl;
	cin.clear();
	cin.getline(valor, 30);
	day = is_number(valor);

	cin.clear();
	cin.getline(valor, 30);
	month = is_number(valor);

	cin.clear();
	cin.getline(valor, 30);
	year = is_number(valor);

	date ultima_muda = date(day, month, year);

	while(!ultima_muda.valid()){
		cout<< "Data inválida, digite novamente: " << endl;
		cin.clear();
		cin>> day >> month >> year;
		ultima_muda.set_day(day);
		ultima_muda.set_month(month);
		ultima_muda.set_year(year);
	}


	if(modo_criacao == 1){
		shared_ptr<Animal> anfibio(new Anfibio(animais_m.size(), 
			"Amphibia", nome_cientifico, *sexo
			, tam, dieta, vet.get(),
			trat.get(), nome, total_mudas
			, day, month, year));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		string autorizacao_ibama;
		string uf_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite a UF de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		uf_origem = static_cast<string>(valor);

		shared_ptr<Animal> anfibioNativo(new AnfibioNativo(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get(),
			trat.get(), nome, total_mudas, day, month, year 
			, autorizacao_ibama, uf_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibioNativo);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 3){
		string autorizacao_ibama;
		string pais_origem;
		string cidade_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite o país de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		pais_origem = static_cast<string>(valor);

		cout << "Digite a cidade de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		cidade_origem = static_cast<string>(valor);

		shared_ptr<Animal> anfibioExotico(new AnfibioExotico(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get(),
			trat.get(), nome, total_mudas, day, month, year 
			, autorizacao_ibama, pais_origem, cidade_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibioExotico);

		animais_m[animais_m.size()] = bicho;
	}
};

void Controle::criar_ave(int modo_criacao){
	/*shared_ptr<Veterinario> vet(new Veterinario);
	shared_ptr<Tratador> trat(new Tratador);
	
	char * valor = new char;
	string nome;
	string nome_cientifico;
	char * sexo = new char;
	double tam;
	string dieta;
	string cor;

	cout << "Digite o nome cientifico: " << endl;
	cin.clear();
	cin.getline(valor,100);
	nome_cientifico = static_cast<string>(valor); 

	cout << "Digite o sexo do animal, M para macho e F para femea: " << endl;
	cin.clear();
	cin.getline(sexo,20);

	while(*sexo != 'F' && *sexo != 'M'){
		cout << "Sexo inválido, digite novamente: " << endl;
		cin.clear();
		cin.getline(sexo,20);;
	}
	cout << "Sexo: " << *sexo << endl;
	
	cout << "Digite o tamanho do mamifero: " << endl;
	cin.clear();
	cin.getline(valor, 30);
	tam = is_number(valor);


	cout << "Digite a dieta do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,200);
	dieta = static_cast<string>(valor);

	cout << "Por enquanto serão uns veterinários genéricos." << endl;

	cout << "Digite a O nome de batismo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	nome = static_cast<string>(valor);

	cout << "Digite a cor do pelo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	cor = static_cast<string>(valor);

	if(modo_criacao == 1){
		shared_ptr<Animal> mamifero(new Mamifero(animais_m.size(), 
			"Mammalia", nome_cientifico, *sexo
			, tam, dieta, vet.get(),
			trat.get(), nome, cor));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		string autorizacao_ibama;
		string uf_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite a UF de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		uf_origem = static_cast<string>(valor);


		shared_ptr<Animal> mamiferoNativo(new MamiferoNativo(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get()
			, trat.get(), nome, cor, autorizacao_ibama, uf_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamiferoNativo);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 3){
		string autorizacao_ibama;
		string pais_origem;
		string cidade_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite o país de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		pais_origem = static_cast<string>(valor);

		cout << "Digite a cidade de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		cidade_origem = static_cast<string>(valor);

		shared_ptr<Animal> mamiferoExotico(new MamiferoExotico(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get()
			, trat.get(), nome, cor, autorizacao_ibama, pais_origem, cidade_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamiferoExotico);

		animais_m[animais_m.size()] = bicho;
	}*/
};

void Controle::criar_mamifero(int modo_criacao){
	shared_ptr<Veterinario> vet(new Veterinario);
	shared_ptr<Tratador> trat(new Tratador);
	
	char * valor = new char;
	string nome;
	string nome_cientifico;
	char * sexo = new char;
	double tam;
	string dieta;
	string cor;

	cout << "Digite o nome cientifico: " << endl;
	cin.clear();
	cin.getline(valor,100);
	nome_cientifico = static_cast<string>(valor); 

	cout << "Digite o sexo do animal, M para macho e F para femea: " << endl;
	cin.clear();
	cin.getline(sexo,20);

	while(*sexo != 'F' && *sexo != 'M'){
		cout << "Sexo inválido, digite novamente: " << endl;
		cin.clear();
		cin.getline(sexo,20);;
	}
	cout << "Sexo: " << *sexo << endl;
	
	cout << "Digite o tamanho do mamifero: " << endl;
	cin.clear();
	cin.getline(valor, 30);
	tam = is_number(valor);


	cout << "Digite a dieta do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,200);
	dieta = static_cast<string>(valor);

	cout << "Por enquanto serão uns veterinários genéricos." << endl;

	cout << "Digite a O nome de batismo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	nome = static_cast<string>(valor);

	cout << "Digite a cor do pelo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	cor = static_cast<string>(valor);

	if(modo_criacao == 1){
		shared_ptr<Animal> mamifero(new Mamifero(animais_m.size(), 
			"Mammalia", nome_cientifico, *sexo
			, tam, dieta, vet.get(),
			trat.get(), nome, cor));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		string autorizacao_ibama;
		string uf_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite a UF de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		uf_origem = static_cast<string>(valor);


		shared_ptr<Animal> mamiferoNativo(new MamiferoNativo(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get()
			, trat.get(), nome, cor, autorizacao_ibama, uf_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamiferoNativo);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 3){
		string autorizacao_ibama;
		string pais_origem;
		string cidade_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite o país de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		pais_origem = static_cast<string>(valor);

		cout << "Digite a cidade de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		cidade_origem = static_cast<string>(valor);

		shared_ptr<Animal> mamiferoExotico(new MamiferoExotico(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get()
			, trat.get(), nome, cor, autorizacao_ibama, pais_origem, cidade_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamiferoExotico);

		animais_m[animais_m.size()] = bicho;
	}
};

void Controle::criar_reptil(int modo_criacao){
	/*shared_ptr<Veterinario> vet(new Veterinario);
	shared_ptr<Tratador> trat(new Tratador);
	
	char * valor = new char;
	string nome;
	string nome_cientifico;
	char * sexo = new char;
	double tam;
	string dieta;
	string cor;

	cout << "Digite o nome cientifico: " << endl;
	cin.clear();
	cin.getline(valor,100);
	nome_cientifico = static_cast<string>(valor); 

	cout << "Digite o sexo do animal, M para macho e F para femea: " << endl;
	cin.clear();
	cin.getline(sexo,20);

	while(*sexo != 'F' && *sexo != 'M'){
		cout << "Sexo inválido, digite novamente: " << endl;
		cin.clear();
		cin.getline(sexo,20);;
	}
	cout << "Sexo: " << *sexo << endl;
	
	cout << "Digite o tamanho do mamifero: " << endl;
	cin.clear();
	cin.getline(valor, 30);
	tam = is_number(valor);


	cout << "Digite a dieta do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,200);
	dieta = static_cast<string>(valor);

	cout << "Por enquanto serão uns veterinários genéricos." << endl;

	cout << "Digite a O nome de batismo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	nome = static_cast<string>(valor);

	cout << "Digite a cor do pelo do mamifero: " << endl;
	cin.clear();
	cin.getline(valor,50);
	cor = static_cast<string>(valor);

	if(modo_criacao == 1){
		shared_ptr<Animal> mamifero(new Mamifero(animais_m.size(), 
			"Mammalia", nome_cientifico, *sexo
			, tam, dieta, vet.get(),
			trat.get(), nome, cor));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 2){
		string autorizacao_ibama;
		string uf_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite a UF de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		uf_origem = static_cast<string>(valor);


		shared_ptr<Animal> mamiferoNativo(new MamiferoNativo(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get()
			, trat.get(), nome, cor, autorizacao_ibama, uf_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamiferoNativo);

		animais_m[animais_m.size()] = bicho;
	}

	else if(modo_criacao == 3){
		string autorizacao_ibama;
		string pais_origem;
		string cidade_origem;

		cout << "Digite a autorização do Ibama: " << endl;
		cin.clear();
		cin.getline(valor,50);
		autorizacao_ibama = static_cast<string>(valor);

		cout << "Digite o país de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		pais_origem = static_cast<string>(valor);

		cout << "Digite a cidade de origem: " << endl;
		cin.clear();
		cin.getline(valor,50);
		cidade_origem = static_cast<string>(valor);

		shared_ptr<Animal> mamiferoExotico(new MamiferoExotico(animais_m.size()
			, nome_cientifico, *sexo, tam, dieta, vet.get()
			, trat.get(), nome, cor, autorizacao_ibama, pais_origem, cidade_origem));
		shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamiferoExotico);

		animais_m[animais_m.size()] = bicho;
	}*/
};

		
void Controle::adicionar_animal(){

	char * option_animal = new char;
	int option_1;
	int option_2;
	cout << "Digite a opção desejada: " << endl;
	cout << "\t 1 - Anfibio;" << endl;
	cout << "\t 2 - Ave;" << endl;
	cout << "\t 3 - Aracnídeo;" << endl;
	cout << "\t 4 - Ave;" << endl;
	cout << "\t 5 - Inseto;" << endl;
	cout << "\t 6 - Mamifero;" << endl;
	cout << "\t 7 - Peixe;" << endl;
	cout << "\t 8 - Reptil;" << endl;

	cin.clear();
	cin.getline(option_animal,20);
	option_1 = is_number(option_animal);

	while(option_1 < 1 || option_1 > 8){
		cout << "Esse número não é valido, tente novamente: " << endl;
		cin.clear();
		cin.getline(option_animal,20);
		option_1 = is_number(option_animal);
	}

	cout << "Digite o tipo correspondente: " << endl;
	cout << "\t 1 - Domestico;" << endl;
	cout << "\t 2 - Silvestre Nativo;" << endl;
	cout << "\t 3 - Silvestre Exotico;" << endl; 

	cin.clear();
	cin.getline(option_animal, 20);
	option_2 = is_number(option_animal);

	while(option_2 < 1 || option_2 > 3){
		cout << "Esse número não é valido, tente novamente: " << endl;
		cin.clear();
		cin.getline(option_animal,20);
		option_2 = is_number(option_animal);
	}

	if (option_1 == 1){
		criar_anfibio(option_2);
	}
	else if (option_1 == 2){
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
	}
	else if (option_1 == 3){
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
	}
	else if (option_1 == 4){
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
	}
	else if (option_1 == 5){
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
	}

	else if (option_1 == 6){	
		criar_mamifero(option_2);
	}

	else if (option_1 == 7){
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
	}
	else if (option_1 == 8){
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
	}



	// cout << "Só para o compilador parar de mandar aviso: " << option_1 << option_2 <<  endl;
}


void Controle::remover_animal(){

}
void Controle::alterar_animal(){

}
void Controle::consultar_animais(){
	animais_m[animais_m.size()-1]->write();
}
void Controle::consultar_animais_por_funcionario(){

}
		
void Controle::adicionar_funcionario(){

}
void Controle::remover_funcionario(){

}
void Controle::alterar_funcionario(){

}
void Controle::consultar_funcionario(){

}