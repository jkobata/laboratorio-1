/*Autor: João Vitor Kobata
*/
#include <iostream>
#include "funcionario.h"
#include "empresa.h"
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<empresa> empresas;
	vector<funcionario> funcionarios;
	int refd,refm,refa;
		while(true)
		{
			cout << "(0) para criar uma empresa" << endl;
			cout << "(1) para adicioar funcionario" << endl;
			cout << "(2) para listar dados dos funcionaios" << endl;
			cout << "(3) para modificar em x porcento o salario dos funcionarios" << endl;
			cout << "(4) para listar funcionarios por ordem de experiencia" << endl;
			cout << "(5) para listar a media de funcionarios da empresa" << endl;
			int escolha;
			string nometemp,cnpjtemp;
				cin >> escolha;
			switch(escolha){
				case 0:
				{
					cout << "digite o nome e o cnpj da empresa (nome_exemplo cnpj_exemplo (xx.xxx.xxx/xxxx.xx)" << endl;
					cin >> nometemp >> cnpjtemp;
					empresa temp(nometemp,cnpjtemp);
					empresas.push_back(temp);
				}
					break;
				case 1:
				{
					string nomeFtemp;
					int salariotemp;
					cout << "digite o CNPJ da empresa" << endl;
					cin >> cnpjtemp;
					int tamanhoEmpresa = empresas.size();
					for(int i = 0;i < tamanhoEmpresa ;i++){
						if(cnpjtemp.compare(empresas[i].getCNPJ()) == 0){
							cout<< "digite nome do funcionario, salario, exemplo(nome_exemplo , 200)"<< endl;
							cin >> nomeFtemp >> salariotemp;
							cout<<"digite a data de admissão exemplo (XX YY ZZZZ)"<<endl;
							cin >> refd >> refm >> refa;
							funcionario tempF(nomeFtemp,salariotemp);
							tempF.setdata(refd,refm,refa);
							tempF.DefinirExperiencia();
							tempF.setCNPJF(cnpjtemp);
							funcionarios.push_back(tempF);
							break;
						}
					}
				}
					break;
				case 2:
				{
					int tamanhofuncionarios = funcionarios.size();
					cout << "digite o CNPJ da empresa que deseja listar os funconarios cnpj_exemplo (xx.xxx.xxx/xxxx.xx)" << endl;
					cin >> cnpjtemp;
					for(int i = 0;i < tamanhofuncionarios ; i++){
						if(cnpjtemp.compare(funcionarios[i].getCNPJF()) == 0){
							cout<<"data de admissão: " <<funcionarios[i].getDataDia()<<"/"<<funcionarios[i].getDataMes()<<"/"<<funcionarios[i].getDataAno()<<" Nome: " << funcionarios[i].getNomeDoFuncionario()<<" salario: " << funcionarios[i].getsalario() << endl;
						}

					}

				}
				break;
				case 3:
				{
					int tamanhofuncionarios = funcionarios.size();
					cout << "digite o CNPJ da empresa que deseja alterar os salarios cnpj_exemplo (xx.xxx.xxx/xxxx.xx)" << endl;
					cin >> cnpjtemp;
					cout <<"digite em porcentagem o aumento do salario exemplo(XX)" <<endl;
					float PorcentagemDoSalario;
					cin >> PorcentagemDoSalario;
					float refporcentagem = 0;
					refporcentagem = PorcentagemDoSalario/100;
					for(int i = 0; i < tamanhofuncionarios ; i++){
						if(cnpjtemp.compare(funcionarios[i].getCNPJF()) == 0){
							float ref = funcionarios[i].getsalario();
							funcionarios[i].setsalario((ref * refporcentagem) + ref );
						}
					}
				}
				break;
				case 4:
				{
					vector<funcionario>lista;
					int tamanhofuncionarios = funcionarios.size();
					cout << "digite o CNPJ da empresa que deseja listar os funcionarios cnpj_exemplo (xx.xxx.xxx/xxxx.xx)" << endl;
					cin >> cnpjtemp;
					int referencia = 0 ;
					for(int a = 0;a<tamanhofuncionarios;a++){
						for(int i = 0; i < tamanhofuncionarios ; i++){
							if(cnpjtemp.compare(funcionarios[i].getCNPJF()) == 0){
								if(funcionarios[i].getExperiencia() >= referencia){
									referencia = funcionarios[i].getExperiencia();
								}
							}
						}
						for(int b =0;b<tamanhofuncionarios;b++){
							if(referencia == funcionarios[b].getExperiencia()){
								lista.push_back(funcionarios[b]);
								funcionarios[b].setExperiencia(0);
								referencia = 0;
							}
						}
					}
					for(int i = 0;i < tamanhofuncionarios;i++){
						cout <<"Nome :"<< lista[i].getNomeDoFuncionario()<<" Salario :"<< lista[i].getsalario() <<" Data: "<<lista[i].getDataDia()<<"/"<<lista[i].getDataMes()<<"/"<<lista[i].getDataAno() << endl;
					}
				}
				break;
				case 5:
				{
					float media = 0;
					float tamanhofuncionarios = funcionarios.size();
					float tamanhoEmpresa = empresas.size();
					media = tamanhofuncionarios/tamanhoEmpresa;
					cout <<"A media de funcionarios por empresa é "<< media <<endl;

				}
				break;

			}


		}





return 0;
}