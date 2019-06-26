#include "TratamentoInput.h"

double TratamentoInput::is_number(char * number){
	int i = 0;
	string name;
	while(name.size() == 0 or number[i] != '\0'){
		try {
			if (!(number[i] == 46 or (int(number[i]) > 47 and int(number[i]) < 58))){
				throw NaoENumero();
			}
		}
		catch (NaoENumero &ex){
			cerr << ex.what() << endl;
			i = 0;
			cin.clear();
			cin.getline(number,300);
			name = number;
		}
		catch (...){
			cerr << "Não é possível converter.Iremos retornar o valor zero." << endl;
			return 0;
		}
		i++;
	}
	return stoi(number);
};

char * TratamentoInput::inputChar(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	return auxiliar;
};


string TratamentoInput::inputString(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	string definitive = static_cast<string>(auxiliar);
	delete[] auxiliar;
	return definitive;
};

int TratamentoInput::inputInt(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	int result =  is_number(auxiliar);
	delete[] auxiliar;
	return result;
};

double TratamentoInput::inputDouble(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	int result =  is_number(auxiliar);
	delete[] auxiliar;
	return result;
};

