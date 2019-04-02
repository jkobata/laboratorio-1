/*Autor: João Vitor Kobata
*/
#include <iostream>
#include <string>
#include"jogador.h"
#include <vector>
#include"dado.h"
using namespace std;

int main(){
	dado meu_dado;
	vector<jogador> jogadores;
	int NumeroDeJogadores;
	cout << "Digite o Numero de Jogadores" << endl;
	cin  >> NumeroDeJogadores;
	for(int i = 0;i < NumeroDeJogadores; i++){
		cout << "Digite o nome do Jogador " << i << endl;
		string tempnome;
		cin >> tempnome;
		jogador temp;
		temp.setNomeDoJogador(tempnome);
		jogadores.push_back(temp);
		jogadores[i].setstop(1);
		jogadores[i].setPontosTotal(0);

	}
	for(int i = 0;i < NumeroDeJogadores; i++){
		cout << jogadores[i].getNomeDoJogador()<< endl;
	}

	int a=1;
	int turno = 0;
	int stopMarca = 0;
	int derrota = 0;

	while(a == 1){

		if(jogadores[turno].getstop() == 1){
			cout << "(1) Você quer para, (2) jogar dado  (" <<jogadores[turno].getNomeDoJogador()<<")"<< endl;
			int indicador;
			cin >> indicador;
			switch(indicador){
				case 1:
		 			cout <<"o jogador " << jogadores[turno].getNomeDoJogador() << " parou" << endl;
		 			jogadores[turno].setstop(0);
		 			stopMarca++;
		 			break;

			
				case 2:
				int valortemp = meu_dado.jogar();
				jogadores[turno].setPontosTotal(valortemp);
				cout <<jogadores[turno].getPontosTotal()<< endl;
					if(jogadores[turno].getPontosTotal() > 30){
						jogadores[turno].setstop(0);
						derrota++;
						stopMarca++;
						cout <<"o jogador " << jogadores[turno].getNomeDoJogador() << " passou de 30 e perdeu" <<endl;
					}
					break;
			}
		}
		turno++;
		if(derrota == NumeroDeJogadores -1){
			for(int i =0; i< NumeroDeJogadores ;i++){
				if(jogadores[i].getstop() == 1){
					cout <<jogadores[i].getNomeDoJogador() << " GANHOU  a partida !!! "<< endl;
				}
			}
		}
		if(turno == NumeroDeJogadores){
			turno = 0;
		}
		if(stopMarca == NumeroDeJogadores){
			int ref = 0;
			for(int i = 0;i < NumeroDeJogadores;i++){
				if(jogadores[i].getPontosTotal() >= ref && jogadores[i].getPontosTotal() <= 30){
					ref = jogadores[i].getPontosTotal();
				}
			}
			for(int i = 0;i < NumeroDeJogadores;i++){
				if(ref == jogadores[i].getPontosTotal()){
					cout <<"o jogador " << jogadores[i].getNomeDoJogador() << " GANHOU a partida!!!" << endl;

				}
			}

			return 0;
		}

		for(int i=0;i<NumeroDeJogadores;i++){
			if(jogadores[i].getstop() == 0 && jogadores[i].getPontosTotal() > 30){
			cout<<jogadores[i].getNomeDoJogador()<< " = "<<jogadores[i].getPontosTotal() << " X Perdeu"<< endl;
			}
			if(jogadores[i].getstop() == 0 && jogadores[i].getPontosTotal() < 30){
			cout<<jogadores[i].getNomeDoJogador()<< " = "<<jogadores[i].getPontosTotal() << " parou"<< endl;
			}
			else{
				cout<<jogadores[i].getNomeDoJogador()<< " = "<<jogadores[i].getPontosTotal() << endl;
			}
		}
	}





	return 0;
}