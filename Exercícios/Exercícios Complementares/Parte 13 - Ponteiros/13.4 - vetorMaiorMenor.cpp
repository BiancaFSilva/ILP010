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
	int *pnt, *pntM, *pntm;
	int v[4], maior, menor;
	char op;	
	
	do {
		//Cabecalho
		system("cls");
	    cabecalho();
			
		// In?cio da lógica de programação
		pnt = &v[0];
		pntM = &maior;
		pntm = &menor;
		
		maior = -9999;
		menor = 9999;

		cout << "Digite 4 numeros: \n";
		for (int i = 0; i < 4; i++) {
			cout << "[" << (i + 1) << "]: ";
			cin >> *pnt;
			
			if (*pnt > *pntM) {
				pntM = pnt;
			}
			if (*pnt < *pntm) {
				pntm = pnt;
			}
			
			pnt++;
		}
				
		// Apresentação dos resultados 
		cout << "\nMaior elemento: " << *pntM;
		cout << "\nMenor elemento: " << *pntm;
		
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
		
		system("pause");
	} while (op == 'S' || op == 's');
}
