/*Autor: João Vitor Kobata
*/
#include "jogador.h"

string jogador::getNomeDoJogador(){
	return NomeDoJogador;
}
void jogador::setNomeDoJogador(string i){
	NomeDoJogador = i;

}
int jogador::getPontosTotal(){
	return PontosTotal;
}
void jogador::setPontosTotal(int i){
	PontosTotal = PontosTotal + i;
}
bool jogador::getstop(){
	return stop;
}
void jogador::setstop(int i){
	stop = i;
}