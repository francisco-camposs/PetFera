#include "AracnideoDomestico.h"

AracnideoDomestico::AracnideoDomestico() {

};
AracnideoDomestico::AracnideoDomestico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, int total_de_mudas, 
			string tipo_veneno, int day, int month, int year): 
	Aracnideo(id, "Arachnida", nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year) {

};

AracnideoDomestico::~AracnideoDomestico() {

};

string AracnideoDomestico::write(){
	ostringstream str;
	str<<"AracnideoDomestico;";//0
	str<<m_id<<";"; //1
	str<<m_classe<<";";//2
	str<<m_nome_cientifico<<";";//3
	str<<m_sexo<<";";//4
	str<<m_tamanho<<";";//5
	str<<m_dieta<<";";//6
	str<<m_veterinario->get_id()<<";";//7
	str<<m_tratador->get_id()<<";";//8
	str<<m_nome_batismo<<";";//9
	// Total de Mudas
	str<<m_total_de_mudas<<";";//10
	// Última muda
	str<<m_ultima_muda<<";";//11
	// Tipo de veneno
	str<<m_tipo_veneno<<endl;//12

	return str.str();
};

string AracnideoDomestico::Tipo(){
	return "AracnideoDomestico";
};

ostream& AracnideoDomestico::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros\tDecimal\t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<NULL<<endl;
	os<<"Tratador responsável \tInterio \t"<<NULL<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \tInteiro \t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \tclasse date \t"<<m_ultima_muda<<endl;
	os<<"Tipo de veneno \tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	return os;
};

void AracnideoDomestico::inicializar_animal(int id){
	inicializar_aracnideo(id);
};