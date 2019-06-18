#include "Animal.h"

using namespace std;

Animal::Animal(){

};

Animal::Animal(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, Veterinario* veterinario, 
		Tratador* tratador, string nome_batismo): m_id(id), m_classe(classe)
		, m_nome_cientifico(nome_cientifico), m_sexo(sexo)
		, m_tamanho(tamanho), m_dieta(dieta), m_veterinario(veterinario)
		, m_tratador(tratador), m_nome_batismo(nome_batismo) {/*
 */};

Animal::~Animal(){

};

void Animal::set_m_id(int id){
	m_id = id;
};

void Animal::set_m_classe(string classe){
	m_classe = classe;
};

void Animal::set_m_nome_cientifico(string nome_cientifico){
	m_nome_cientifico = nome_cientifico;
};

void Animal::set_m_sexo(char sexo){
	m_sexo = sexo;
};

void Animal::set_m_tamanho(double tamanho){
	m_tamanho = tamanho;
};

void Animal::set_m_dieta(string dieta){
	m_dieta = dieta;
};

void Animal::set_m_veterinario(Veterinario* veterinario){
	m_veterinario = veterinario;
};

void Animal::set_m_tratador(Tratador* tratador){
	m_tratador = tratador;
};

void Animal::set_m_nome_batismo(string nome_batismo){
	m_nome_batismo = nome_batismo;
};


int Animal::get_m_id() const{
	return m_id;
};

string Animal::get_m_classe() const{
	return m_classe;
};

string Animal::get_m_nome_cientifico() const{
	return m_nome_cientifico;
};

char Animal::get_m_sexo() const{
	return m_sexo;
};

double Animal::get_m_tamanho() const{
	return m_tamanho;
};

string Animal::get_m_dieta() const{
	return m_dieta;
};

Veterinario Animal::get_m_veterinario(){
	return *m_veterinario;
};

Tratador Animal::get_m_tratador(){
	return *m_tratador;
};

string Animal::get_m_nome_batismo() const{
	return m_nome_batismo;
};

void Animal::inicializar(string classe, int id){
	shared_ptr<Veterinario> vet(new Veterinario);
	shared_ptr<Tratador> trat(new Tratador);

	string nome;
	string nome_cientifico;
	char * sexo = new char;
	double tam;
	string dieta;

	this->set_m_id(id);

	cout << "Digite o nome cientifico: " << endl;
	nome_cientifico = input.inputString();
	this->set_m_nome_cientifico(nome_cientifico);

	this->set_m_classe(classe);

	cout << "Digite o sexo do animal, M para macho e F para femea: " << endl;
	sexo = input.inputChar();
	while(*sexo != 'F' && *sexo != 'M'){
		cout << "Sexo inválido, digite novamente: " << endl;
		sexo = input.inputChar();
	}
	cout << "Sexo: " << *sexo << endl;
	this->set_m_sexo(*sexo);

	cout << "Digite o tamanho do animal: " << endl;
	tam = input.inputDouble();
	this->set_m_tamanho(tam);

	cout << "Digite a dieta do animal: " << endl;
	dieta = input.inputString();
	this->set_m_dieta(dieta);

	cout << "Por enquanto serão uns veterinários genéricos." << endl;
	this->set_m_veterinario((vet.get()));
	this->set_m_tratador(trat.get());

	cout << "Digite a o nome de batismo do animal: " << endl;
	nome = input.inputString();
	this->set_m_nome_batismo(nome);
};
