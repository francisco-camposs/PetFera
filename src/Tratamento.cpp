#include "Tratamento.h" 

string * Tratamento::tratamento_animal(string archive){
	string auxiliar;
	string * line = new string[20];

	int contador = 0;

	for (int i = 0; i < 20; i++){
		while (contador < (int)archive.size() && (archive.at(contador) != ';' && archive.at(contador) != '\0' && archive.at(contador) != '\n' )){
			auxiliar.push_back(archive.at(contador));
			contador+=1;
		}
		contador += 1;
		line[i] = auxiliar;
		auxiliar.clear();
	}

	return line;
};

string * Tratamento::Tratamento_funcionario(string archive){
	return NULL;
};


string * Tratamento::tratamento_data(string archive){
	string auxiliar;
	string * line = new string[3];

	int contador = 0;

	for (int i = 0; i < 3; i++){
		while (contador < (int)archive.size() && (archive.at(contador) != '/' && archive.at(contador) != '\0' && archive.at(contador) != '\n' )){
			auxiliar.push_back(archive.at(contador));
			contador+=1;
		}
		contador += 1;
		line[i] = auxiliar;
		auxiliar.clear();
	}

	return line;
};
