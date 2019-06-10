#include "ReptilNativo.h"

ReptilNativo::ReptilNativo(){

}
ReptilNativo::ReptilNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, Veterinario* veterinario, 
			Tratador* tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string uf_origem):
	Reptil(id, "Reptilia", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno), 
	AnimalNativo(autorizacao_ibama, uf_origem){

}
ReptilNativo::~ReptilNativo(){

}

void ReptilNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string ReptilNativo::write(){
/*	cout<<"Campo;Tipo de Dados;Valores"<<endl;
	cout<<"Identificador Do animal;Inteiro;"<<m_id<<endl;
	cout<<"Classe do animal;Cadeia de caracteres;"<<m_classe<<endl;
	cout<<"Nome científico do animal;Cadeia de caracteres;"<<m_nome_cientifico<<endl;
	cout<<"Sexo do animal;Caractere;"<<m_sexo<<endl;
	cout<<"Tamanho média em métros;Decimal;"<<m_tamanho<<endl;
	cout<<"Dieta redominante;Cadeia de caracteres;"<<m_dieta<<endl;
	cout<<"Veterinário associado;Interio;"<<m_veterinario->get_id()<<endl;
	cout<<"Tratador responsável;Interio;"<<m_tratador->get_id()<<endl;
	cout<<"Nome de batismo;Cadeia de caracteres;"<<m_nome_batismo<<endl;
	cout<<"Venenoso;booleano;"<<m_venenoso<<endl;
	cout<<"Tipo de veneno;Cadeia de caracteres;"<<m_tipo_veneno<<endl;
	cout<<"Autorização do Ibama;Cadeia de caracteres;"<<m_autorizacao_ibama<<endl;
	cout<<"UF de origem;Cadeia de caracteres;"<<m_uf_origem<<endl;
*/
	ostringstream str;
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// País de origem
	str<<"NVF;";
	// Cidade de origem
	str<<"NVF;";
	// UF de origem
	str<<m_uf_origem<<";";
	// Total de Mudas
	str<<"NVF;";
	// Última muda
	str<<"NVF;";
	// Tamanho do bico
	str<<"NVF;";
	// Envergadura das Asas
	str<<"NVF;";
	// Cor dos pelos
	str<<"NVF;";
	// Se é venenoso
	str<<m_venenoso<<";";
	// Tipo de veneno
	str<<m_tipo_veneno<<endl;

	return str.str();
};

string ReptilNativo::Tipo(){
	return "ReptilNativo";
};

ostream& ReptilNativo::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t"<<m_tamanho<<endl;
	os<<"Dieta redominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInterio \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInterio \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Venenoso \tbooleano \t"<<m_venenoso<<endl;
	os<<"Tipo de veneno \tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	os<<"Autorização do Ibama \tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"UF de origem \tCadeia de caracteres \t"<<m_uf_origem<<endl;

	return os;
}