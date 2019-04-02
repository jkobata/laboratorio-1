/*Autor: João Vitor Kobata
*/
#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;
class funcionario{
	private:

		string NomeDoFuncionario;
		int salario;
		string CNPJF;
		int dia;
		int mes;
		int ano;
		int experiencia = 0 ;
		int refx;
	public:
		funcionario();
		funcionario(string nome,int salario);
		string getNomeDoFuncionario();
		void setNomeDoFuncionario(string i);
		int getsalario();
		void setsalario(int i);
		string getCNPJF();
		void setCNPJF(string i);
		void setdata(int d, int m, int a);
		void DefinirExperiencia();
		int getExperiencia();
		void setExperiencia(int i);
		int getDataDia();
		int getDataMes();
		int getDataAno();
	};
#endif