/*Autor: João Vitor Kobata
*/
#include "funcionario.h"
#include <string>

funcionario::funcionario(){
	NomeDoFuncionario = " ";
	salario = 0;
}
funcionario::funcionario(string nome , int s){
setNomeDoFuncionario(nome);
setsalario(s);
}

string funcionario::getNomeDoFuncionario(){
	return NomeDoFuncionario;
}
void funcionario::setNomeDoFuncionario(string i){
	NomeDoFuncionario = i;
}
int funcionario::getsalario(){
	return salario;
}
void funcionario::setsalario(int i){
	salario = i;
}

string funcionario::getCNPJF(){
	return CNPJF;
}
void funcionario::setCNPJF(string i){
	CNPJF = i;
}
void funcionario::setdata(int d, int m, int a){
dia = d;
mes = m;
ano = a;
}
void funcionario::DefinirExperiencia(){
refx = dia;
experiencia = refx;
refx = mes * 30;
experiencia = experiencia + refx;
refx = ano * 360;
experiencia = experiencia + refx;
}
int funcionario::getExperiencia(){
	return experiencia;
}
void funcionario::setExperiencia(int i){
	experiencia = i;
}
int funcionario::getDataDia(){
	return dia;
}
int funcionario::getDataMes(){
	return mes;
}
int funcionario::getDataAno(){
	return ano;
}