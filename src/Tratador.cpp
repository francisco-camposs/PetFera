#include "Tratador.h" 

Tratador::Tratador(){

};

Tratador::Tratador(int id, string nome, string cpf, short int idade, 
			string tipo_sanguineo, char fator_rh, 
			string especialidade, int nivel_de_seguranca): Funcionario(id,nome,cpf,idade,tipo_sanguineo,fator_rh,especialidade), m_nivel_de_seguranca(nivel_de_seguranca){
};

Tratador::~Tratador(){

};

Tratador::Tratador(Tratador &Tratador){
	m_id = Tratador.get_id();
	m_nome = Tratador.get_nome();
	m_cpf = Tratador.get_cpf();
	m_idade = Tratador.get_idade();
	m_tipo_sanguineo = Tratador.get_tipo_sanguineo();
	m_fator_rh = Tratador.get_fator_rh();
	m_especialidade = Tratador.get_especialidade();
	m_nivel_de_seguranca = Tratador.get_nivel_de_seguranca();
};

// Métodos Sets
void Tratador::set_nivel_de_seguranca(int nivel_de_seguranca){
	m_nivel_de_seguranca = nivel_de_seguranca;
};

// Métodos Gets
int Tratador::get_nivel_de_seguranca(){
	return m_nivel_de_seguranca;
};

string Tratador::write(){
/*	
*/
	ostringstream str;
	str<<"Tratador;";
	str<<m_id<<";";
	str<<m_nome<<";";
	str<<m_cpf<<";";
	str<<m_idade<<";";
	str<<m_tipo_sanguineo<<";";
	str<<m_fator_rh<<";";
	str<<m_especialidade<<";";
	str<<m_nivel_de_seguranca<<endl;

	return str.str();
};

ostream& Tratador::print(ostream& os)const{
	os<<"Campo;Tipo de dado \tValores"<<endl;
	os<<"Identificador do funcionário \tCadeia de caracteres \t"<<m_id << endl;
	os<<"Função \tCadeia de Caracteres \tTratador" << endl;
	os<<"Nome do funcionário \tCadeia de caracteres \t"<<m_nome << endl;
	os<<"CPF do funcionário \tCadeia de caracteres \t"<<m_cpf << endl;
	os<<"Idade do funcionário \tInteiro \t"<<m_idade << endl;
	os<<"Tipo sanguíneo \tCadeia de caracteres \t"<<m_tipo_sanguineo << endl;
	os<<"Fator RH \tCaractere \t"<<m_fator_rh << endl;
	os<<"Especialidade \tCadeia de caracteres \t"<<m_especialidade << endl;
	os<<"Nível de Segurança \tInteiro \t"<<m_nivel_de_seguranca << endl;
	return os;
}