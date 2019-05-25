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

	// cout << "Só para o compilador parar de mandar aviso: " << option_1 << option_2 <<  endl;
}


void Controle::remover_animal(){

}
void Controle::alterar_animal(){

}
void Controle::consultar_animais(){

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