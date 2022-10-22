#include <iostream>
#include <stdio.h>
#include "veiculo.h"

void Veiculo::setNumRodas(int quantidade){
	this->num_rodas = quantidade;
	delete []rodas;
	this->rodas = new Roda[quantidade];

	cout << this->nome << ": " << this->num_rodas << " rodas" << endl;
};

int Veiculo::getNumRodas(){
	delete []rodas;
	return this->num_rodas;
};

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

