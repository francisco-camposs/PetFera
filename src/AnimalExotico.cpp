#include "AnimalExotico.h"

using namespace std;

AnimalExotico::AnimalExotico() {

};

AnimalExotico::AnimalExotico(string autorizacao_ibama, string pais_origem, string autorizacao): 
						AnimalSilvestre(autorizacao_ibama), m_pais_origem(pais_origem), m_autorizacao(autorizacao) {

};

AnimalExotico::~AnimalExotico () {

};

void AnimalExotico::set_pais_origem(string pais_origem) {
	m_pais_origem = pais_origem;
};

void AnimalExotico::set_autorizacao(string autorizacao) {
	m_autorizacao = autorizacao;
};

string AnimalExotico::get_pais_origem() {
	return m_pais_origem;
};

string AnimalExotico::get_autorizacao() {
	return m_autorizacao;
};