/*Desenvolva um programa que possua uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo.
  A função deve retornar um valor booleano. Depois a função principal deve informar ao usuário o resultado*/
  
#include <iostream>
using namespace std;

int main() {
	int num;
	bool retorn;
	
	//Cabecalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
		
			do{
				cout << "\n\nDigite um numero inteiro: ";
				cin >> num;
		
					if(num>0){
						cout << "\nO numero " << num << " e positivo";	
					}
					if(num<0){
						cout << "\nO numero " << num << " e negativo";
					}
			
				cout << "\n\nDeseja executar o programa novamente: (1-sim, 0-nao) ";
				cin >> retorn;
		
			}while (retorn == 1);
		
				if(retorn == 0){
				exit;
			    }		
	}
