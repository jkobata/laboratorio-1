/*Autor: João Vitor Kobata
*/
#include <iostream>
#include "empresa.h"

using namespace std;
empresa::empresa(){
	NomeDaEmpresa = " ";
	CNPJ = " ";
}
empresa::empresa(string nome , string cnpj){
	NomeDaEmpresa = nome;
	CNPJ = cnpj;
}
string empresa::getNomeDaEmpresa(){
	return NomeDaEmpresa;
}
string empresa::getCNPJ(){
	return CNPJ;
}


