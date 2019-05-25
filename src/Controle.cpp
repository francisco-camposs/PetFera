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


void Controle::criar_mamifero(){
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
	
	shared_ptr<Animal> mamifero(new Mamifero(animais_m.size(), 
		"Mammalia", nome_cientifico, *sexo
		, tam, dieta, vet.get(),
		trat.get(), nome, cor));
	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	animais_m[animais_m.size()] = bicho;
};

void Controle::criar_mamifero_nativo(){

};

void Controle::criar_mamifero_exotico(){

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
		if (option_2 == 1){

		}
		if (option_2 == 2){
			
		}
		if (option_2 == 3){
			
		}
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
		if (option_2 == 1){	
			criar_mamifero();
		}
		if (option_2 == 2){
			criar_mamifero_nativo();
		}
		if (option_2 == 3){
			criar_mamifero_exotico();
		}
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