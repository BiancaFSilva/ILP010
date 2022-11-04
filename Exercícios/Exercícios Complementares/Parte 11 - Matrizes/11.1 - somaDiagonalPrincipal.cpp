#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main() {
	// Declaração das variáveis
	int m[6][6];
	int s = 0;
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int l = 0; l < 6; l++) {
		cout << "\nInforme os elementos da " << (l + 1) << ".a linha \n";
		for (int c = 0; c < 6; c++) {
			cout << "Informe o elemento da " << (c + 1) << ".a coluna: ";
			cin >> m[l][c];
		}
	}
		
	// Apresentação dos resultados 
	cout << "\nMatriz formada: \n\n";
	for (int l = 0; l < 6; l++) {
		for (int c = 0; c < 6; c++) {
			cout << m[l][c] << "\t";
		
			if (l == c) {
				s = s + m[l][c];
			}
		}	
		cout << "\n";	 
	}
	
	cout << "\nSoma da diagonal principal: " << s;
}