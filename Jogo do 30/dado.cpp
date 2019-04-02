/*Autor: João Vitor Kobata
*/
#include <random>

#include "dado.h"
using namespace std;

dado::dado():rd(), dis(1, 12) {
	valor = dis(rd);
}
int dado::jogar() {
	valor = dis(rd);
	return valor;
}
