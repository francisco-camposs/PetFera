#include "AnimalSilvestre.h"

using namespace std;

AnimalSilvestre::AnimalSilvestre() {

};

AnimalSilvestre::AnimalSilvestre(string autorizacao) {

};

AnimalSilvestre::~AnimalSilvestre() {

};

void set_autorizacao(string autorizacao) {
	m_autorizacao = autorizacao;
};

string get_autorizacao() {
	return m_autorizacao;
};