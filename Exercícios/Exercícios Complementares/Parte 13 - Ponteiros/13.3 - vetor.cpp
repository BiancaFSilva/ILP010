#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main() {
	// Declaração das variáveis
	int *pnt, v[6];
	char op;	
	
	do {
		//Cabecalho
		system("cls");
	    cabecalho();
			
		// In?cio da lógica de programação
		pnt = &v[0];

		cout << "Digite 6 numeros inteiros: \n";
		for (int i = 0; i < 6; i++) {
			cout << "[" << (i + 1) << "]: ";
			cin >> *pnt;
			*pnt++;
		}
				
		// Apresentação dos resultados 
		pnt = &v[0];
		
		cout << "\nElemento \tValor \tEndereco";
		for (int i = 0; i < 6; i++) {
			cout << "\n" << (i + 1) << " \t\t" << v[i] << " \t" << pnt;
		}
		
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
		
		system("pause");
	} while (op == 'S' || op == 's');
}
