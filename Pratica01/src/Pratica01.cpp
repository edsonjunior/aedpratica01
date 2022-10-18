#include <iostream>
using namespace std;
#include "veiculo.h"

//CONSTRUTOR
Veiculo::Veiculo(const char* nome_veiculo){
	this->nome = string(nome_veiculo);
	cout << "Veiculo " + this->nome + " criado." << endl;
	//INCREMENTOS
	this->num_rodas = 0;
	this->rodas = NULL;
}

//DESTRUTOR
Veiculo::~Veiculo() {
	this->rodas = NULL;
	cout << "Veiculo " + this->nome + " destruído." << endl;
}

//CONSTRUTOR
Roda::Roda(){
	cout << "Roda criada." << endl;
}

//DESTRUTOR
Roda::~Roda() {
	cout << "Roda destruída." << endl;
}

int main() {

	cout << "Primeira aplicação C++" << endl;

	Veiculo *v1 = new Veiculo("Azera");

	v1->setNumRodas(4);
	v1->getNumRodas();

	delete v1;

//	{
//		Veiculo veiculo1("v1");
//		{
//			Veiculo veiculo2("v2");
//			{
//				Veiculo veiculo3("v3");
//			}
//		}
//	}


	return 0;
}
