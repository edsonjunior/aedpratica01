/*
 * veiculo.cpp
 *
 *  Created on: 14 de out. de 2022
 *      Author: edson
 */
#include <iostream>
#include <stdio.h>
#include "veiculo.h"

void Veiculo::setNumRodas(int quantidade){
	this->num_rodas = quantidade;
	this->rodas = new Roda[quantidade];

	cout << this->nome << ": " << this->num_rodas << " rodas" << endl;
};

int Veiculo::getNumRodas(){
	delete []rodas;
	return this->num_rodas;
};


