#include "AnimalNativo.h"

using namespace std;

AnimalNativo::AnimalNativo() {

};

AnimalNativo::AnimalNativo(string autorizacao_ibama, string uf_origem, string autorizacao): 
						AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem), m_autorizacao(autorizacao) {

};

AnimalNativo::~AnimalNativo () {

};

void AnimalNativo::set_uf_origem(string uf_origem) {
	m_uf_origem = uf_origem;
};

void AnimalNativo::set_autorizacao(string autorizacao) {
	m_autorizacao = autorizacao;
};

string AnimalNativo::get_uf_origem() {
	return m_uf_origem;
};

string AnimalNativo::get_autorizacao() {
	return m_autorizacao;
};