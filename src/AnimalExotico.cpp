#include "AnimalExotico.h"

using namespace std;

AnimalExotico::AnimalExotico() {

};

AnimalExotico::AnimalExotico(string autorizacao_ibama, string pais_origem, string cidade_origem): 
						AnimalSilvestre(autorizacao_ibama), m_pais_origem(pais_origem), m_cidade_origem(cidade_origem) {

};

AnimalExotico::~AnimalExotico () {

};

void AnimalExotico::set_pais_origem(string pais_origem) {
	m_pais_origem = pais_origem;
};

void AnimalExotico::set_cidade_origem(string cidade_origem) {
	m_cidade_origem = cidade_origem;
};

string AnimalExotico::get_pais_origem() {
	return m_pais_origem;
};

string AnimalExotico::get_cidade_origem() {
	return m_cidade_origem;
};