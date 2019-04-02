/*Autor: João Vitor Kobata
*/
#ifndef _DADO_H_
#define _DADO_H_

#include <random>
#include <iostream>

class dado{
	private:
		int valor;
		
		std::random_device rd;
		std::uniform_real_distribution<> dis;
	public:
		dado();
		int jogar();


};
#endif