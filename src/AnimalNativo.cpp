#include "AnimalNativo.h"

using namespace std;

AnimalNativo::AnimalNativo() {

};

AnimalNativo::AnimalNativo(string autorizacao_ibama, string uf_origem): 
						AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem) {

};

AnimalNativo::~AnimalNativo () {

};

void AnimalNativo::set_uf_origem(string uf_origem) {
	m_uf_origem = uf_origem;
};

string AnimalNativo::get_uf_origem() {
	return m_uf_origem;
};