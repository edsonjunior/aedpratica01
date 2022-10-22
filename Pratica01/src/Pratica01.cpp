#include <iostream>
using namespace std;
#include "veiculo.h"



int main() {

	Veiculo *v1 = new Veiculo("Azera");

	v1->setNumRodas(4);
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
