#include "Tratamento.h"

string * Tratamento::Tratamento_Data(string line){
	string auxiliar;
	string * data = new string[3];

	int contador = 0;

	for (int i = 0; i < 3; i++){
		while (contador < (int)line.size() && (line.at(contador) != '/' && line.at(contador) != '\0' && line.at(contador) != '\n' )){
			auxiliar.push_back(line.at(contador));
			contador+=1;
		}
		contador += 1;
		data[i] = auxiliar;
		auxiliar.clear();
	}
	return data;
};

shared_ptr<Animal> Tratamento::Tratamento_Construtor(string line){
	string auxiliar;

	int contador = 0;
	while(line[contador] != '\n' and line[contador] != ';'){
		auxiliar.push_back(line.at(contador));
		contador++;
	}

	if (auxiliar == "AnfibioDomestico"){
		return Tratamento_AnfibioDomestico(line);
	}
	if (auxiliar == "AnfibioExotico"){
		return NULL;
	}
	if (auxiliar == "AnfibioNativo"){
		return NULL;
	}
	if (auxiliar == "AveDomestica"){
		return NULL;
	}
	if (auxiliar == "AveNativa"){
		return NULL;
	}
	if (auxiliar == "AveExotica"){
		return NULL;
	}
	if (auxiliar == "MamiferoDomestico"){
		return NULL;
	}
	if (auxiliar == "MamiferoExotico"){
		return NULL;
	}
	if (auxiliar == "MamiferoNativo"){
		return NULL;
	}
	if (auxiliar == "ReptilDomestico"){
		return NULL;
	}
	if (auxiliar == "ReptilExotico"){
		return NULL;
	}
	if (auxiliar == "ReptilNativo"){
		return NULL;
	}
	return NULL;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioDomestico(string line){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			cout << contador << endl;
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);

	char sexo = char(auxiliar[4][0]);
	cout << "Sexo: " << sexo << endl;

	shared_ptr<AnfibioDomestico> anfibio(new AnfibioDomestico(stoi(auxiliar[1]), auxiliar[3], sexo
		, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, auxiliar[9],stoi(auxiliar[10]), 
		stoi(data[0]), stoi(data[1]), stoi(data[2])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);
	cout << *bicho << endl;

	delete[] data;
	return NULL;
};
