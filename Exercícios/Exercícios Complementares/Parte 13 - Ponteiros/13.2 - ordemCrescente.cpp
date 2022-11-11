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
	int *pnt1, *pnt2, *pnt3;
	int n, m, o;
	char op;	
	
	do {
		//Cabecalho
		system("cls");
	    cabecalho();
			
		// In?cio da lógica de programação
		pnt1 = &n;
		pnt2 = &m;
		pnt3 = &o;
		
		cout << "Informe o primeiro numero: ";
		cin >> *pnt1;
		cout << "Informe o segundo numero: ";
		cin >> *pnt2;
		cout << "Informe o terceiro numero: ";
		cin >> *pnt3;
		
		// Apresentação dos resultados 
		if (*pnt1 >= *pnt2 && *pnt1 >= *pnt3) {
			if (*pnt2 >= *pnt3) {
				cout << "\nOrdem crescente: " << *pnt1 << ", " << *pnt2 << ", " << *pnt3;
				cout << "\nEnderecos respectivos: " << pnt1 << ", " << pnt2 << ", " << pnt3;
			} else if (*pnt3 > *pnt2) {
				cout << "\nOrdem crescente: " << *pnt1 << ", " << *pnt3 << ", " << *pnt2;
				cout << "\nEnderecos respectivos: " << pnt1 << ", " << pnt3 << ", " << pnt2;
			} 
		} else if (*pnt2 >= *pnt1 && *pnt2 >= *pnt3) {
			if (*pnt1 >= *pnt3) {
				cout << "\nOrdem crescente: " << *pnt2 << ", " << *pnt1 << ", " << *pnt3;
				cout << "\nEnderecos respectivos: " << pnt2 << ", " << pnt1 << ", " << pnt3;
			} else if (*pnt3 > *pnt1) {
				cout << "\nOrdem crescente: " << *pnt2 << ", " << *pnt3 << ", " << *pnt1;
				cout << "\nEnderecos respectivos: " << pnt2 << ", " << pnt3 << ", " << pnt1;
			} 
		} else if (*pnt3 >= *pnt1 && *pnt3 >= *pnt2) {
			if (*pnt1 >= *pnt2) {
				cout << "\nOrdem crescente: " << *pnt3 << ", " << *pnt1 << ", " << *pnt2;
				cout << "\nEnderecos respectivos: " << pnt3 << ", " << pnt1 << ", " << pnt2;
			} else if (*pnt2 > *pnt1) {
				cout << "\nOrdem crescente: " << *pnt3 << ", " << *pnt2 << ", " << *pnt1;
				cout << "\nEnderecos respectivos: " << pnt3 << ", " << pnt2 << ", " << pnt1;
			} 
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
