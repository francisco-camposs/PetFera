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

shared_ptr<Animal> Tratamento::Tratamento_Construtor_Animal(string line){
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
		return Tratamento_AnfibioExotico(line);
	}
	if (auxiliar == "AnfibioNativo"){
		return Tratamento_AnfibioNativo(line);
	}
	if (auxiliar == "AracnideoDomestico"){
		return Tratamento_AracnideoDomestico(line);
	}
	if (auxiliar == "AracnideoNativo"){
		return Tratamento_AracnideoNativo(line);
	}
	if (auxiliar == "AracnideoExotico"){
		return Tratamento_AracnideoExotico(line);
	}
	if (auxiliar == "AveDomestica"){
		return Tratamento_AveDomestica(line);
	}
	if (auxiliar == "AveNativa"){
		return Tratamento_AveNativa(line);
	}
	if (auxiliar == "AveExotica"){
		return Tratamento_AveExotica(line);
	}
	if (auxiliar == "MamiferoDomestico"){
		return Tratamento_MamiferoDomestico(line);
	}
	if (auxiliar == "MamiferoExotico"){
		return Tratamento_MamiferoExotico(line);
	}
	if (auxiliar == "MamiferoNativo"){
		return Tratamento_MamiferoNativo(line);
	}
	if (auxiliar == "ReptilDomestico"){
		return Tratamento_ReptilDomestico(line);
	}
	if (auxiliar == "ReptilExotico"){
		return Tratamento_ReptilExotico(line);
	}
	if (auxiliar == "ReptilNativo"){
		return Tratamento_ReptilNativo(line);
	}
	return NULL;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioDomestico(string line){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AnfibioDomestico> anfibio(new AnfibioDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), stoi(data[0]), stoi(data[1]), 
		stoi(data[2])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioExotico(string line){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AnfibioExotico> anfibio(new AnfibioExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[12], auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioNativo(string line){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AnfibioNativo> anfibio(new AnfibioNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[12], auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AveDomestica(string line){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AveDomestica> ave(new AveDomestica(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), stoi(auxiliar[11])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AveExotica(string line){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AveExotica> ave(new AveExotica(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), stoi(auxiliar[11]), auxiliar[12],
		auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AveNativa(string line){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AveNativa> ave(new AveNativa(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), stoi(auxiliar[11]), auxiliar[12],
		auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_MamiferoDomestico(string line){
	string auxiliar[11];
	int contador = 0;

	for (int i =0; i < 11; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<MamiferoDomestico> mamifero(new MamiferoDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], auxiliar[10]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_MamiferoExotico(string line){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<MamiferoExotico> mamifero(new MamiferoExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], auxiliar[10], auxiliar[11], auxiliar[12], auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_MamiferoNativo(string line){
	string auxiliar[13];
	int contador = 0;

	for (int i =0; i < 13; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<MamiferoNativo> mamifero(new MamiferoNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], auxiliar[10], auxiliar[11], auxiliar[12]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_ReptilDomestico(string line){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<ReptilDomestico> reptil(new ReptilDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_ReptilExotico(string line){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<ReptilExotico> reptil(new ReptilExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], auxiliar[12],
		auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_ReptilNativo(string line){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);

	shared_ptr<ReptilNativo> reptil(new ReptilNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], auxiliar[12],
		auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AracnideoDomestico(string line){
	string auxiliar[13];
	int contador = 0;

	for (int i =0; i < 13; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AracnideoDomestico> aracnideo(new AracnideoDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(aracnideo);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AracnideoExotico(string line){
	string auxiliar[16];
	int contador = 0;

	for (int i =0; i < 16; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AracnideoExotico> aracnideo(new AracnideoExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[13], auxiliar[14], auxiliar[15]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(aracnideo);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AracnideoNativo(string line){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);

	char sexo = char(auxiliar[4][0]);

	shared_ptr<AracnideoNativo> aracnideo(new AracnideoNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], NULL, NULL, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(aracnideo);

	delete[] data;
	return bicho;
};


shared_ptr<Funcionario> Tratamento::Tratamento_Construtor_Funcionario(string line){
	string auxiliar;

	int contador = 0;
	while(line[contador] != '\n' and line[contador] != ';'){
		auxiliar.push_back(line.at(contador));
		contador++;
	}

	if (auxiliar == "Tratador"){
		return Tratamento_Tratador(line);
	}
	if (auxiliar == "Veterinario"){
		return Tratamento_Veterinario(line);
	}
	return NULL;
};

shared_ptr<Funcionario> Tratamento::Tratamento_Tratador(string line){
	string atributos[9];
	int contador = 0;

	for(int i = 0; i < 9; i++){
		while(contador < line.size() and line[contador] != ';'){
			atributos[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char fator_rh = static_cast<char>(atributos[6][0]);

	shared_ptr<Tratador> tratador(new Tratador(stoi(atributos[1])
		, atributos[2],atributos[3], stoi(atributos[4]), atributos[5]
		, fator_rh, atributos[7], stoi(atributos[8])));

	shared_ptr<Funcionario> funcionario = dynamic_pointer_cast<Funcionario>(tratador);
	return funcionario;
};

shared_ptr<Funcionario> Tratamento::Tratamento_Veterinario(string line){
	string atributos[9];
	int contador = 0;

	for(int i = 0; i < 9; i++){
		while(contador < line.size() and line[contador] != ';'){
			atributos[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char fator_rh = static_cast<char>(atributos[6][0]);

	shared_ptr<Veterinario> veterinario(new Veterinario(stoi(atributos[1])
		, atributos[2],atributos[3], stoi(atributos[4]), atributos[5]
		, fator_rh, atributos[7], atributos[8]));

	shared_ptr<Funcionario> funcionario = dynamic_pointer_cast<Funcionario>(veterinario);
	return funcionario;
};