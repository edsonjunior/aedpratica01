/*
 * veiculo.h
 *
 *  Created on: 14 de out. de 2022
 *      Author: edson
 */

#include <iostream>
using namespace std;

#ifndef VEICULO_H_
#define VEICULO_H_

class Roda{
	public:
			Roda();
			~Roda();
};

class Veiculo{
	private:
			string nome;
			int num_rodas;
			Roda * rodas;
	public:
			Veiculo(const char*);
			~Veiculo();
			void setNumRodas(int quantidade);
			int getNumRodas();
};

#endif /* VEICULO_H_ */
