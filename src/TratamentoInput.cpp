#include "TratamentoInput.h"

double TratamentoInput::is_number(char * number){
	int i = 0;
	while(number[i] != '\0'){
		if (!(number[i] == 46 or (int(number[i]) > 47 and int(number[i]) < 58))){
			i = 0;
			cout << "Isso não é um número, tente novamente: " << endl;
			cin.clear();
			cin.getline(number,20);
		}
		i++;
	}
	return stoi(number);
};

char * TratamentoInput::inputChar(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, '\n');
	return auxiliar;
};


string TratamentoInput::inputString(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, '\n');
	string definitive = static_cast<string>(auxiliar);
	delete[] auxiliar;
	return definitive;
};

int TratamentoInput::inputInt(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, '\n');
	int result =  is_number(auxiliar);
	delete[] auxiliar;
	return result;
};

double TratamentoInput::inputDouble(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, '\n');
	int result =  is_number(auxiliar);
	delete[] auxiliar;
	return result;
};

