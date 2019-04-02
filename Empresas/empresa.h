/*Autor: João Vitor Kobata
*/
#ifndef _EMPRESA_H_
#define _EMPRESA_H_
#include <string>
#include "funcionario.h"
#include <vector>

using namespace std;
class empresa{
	private:
		string NomeDaEmpresa;
		string CNPJ;
	public :
		empresa();
		empresa(string nome , string cnpj);
		string getNomeDaEmpresa();
		string getCNPJ();

};
#endif