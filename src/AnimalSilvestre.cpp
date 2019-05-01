#include "AnimalSilvestre.h"

using namespace std;

AnimalSilvestre::AnimalSilvestre() {

};

AnimalSilvestre::AnimalSilvestre(string autorizacao): m_autorizacao(autorizacao) {

};

AnimalSilvestre::~AnimalSilvestre() {

};

void AnimalSilvestre::set_autorizacao(string autorizacao) {
	m_autorizacao = autorizacao;
};

string AnimalSilvestre::get_autorizacao() {
	return m_autorizacao;
};