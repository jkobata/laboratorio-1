/*Autor: João Vitor Kobata
*/
#ifndef _JOGADOR_H_
#define _JOGADOR_H_

#include <iostream>
#include <string>
using namespace std;
class jogador{
	private:
		string NomeDoJogador;
		int PontosTotal = 0;
		bool stop;
	public:
		string getNomeDoJogador();
		void setNomeDoJogador(string i);
		int getPontosTotal();
		void setPontosTotal(int i);
		void setstop(int i);
		bool getstop();
};

#endif