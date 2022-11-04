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
	int s[4] = {0, 0, 0, 0};
	int m[4][8];	
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int l = 0; l < 4; l++) {
		cout << "\nInforme os elementos da " << (l + 1) << ".a linha \n";
		for (int c = 0; c < 8; c++) {
			cout << "Informe o elemento da " << (c + 1) << ".a coluna: ";
			cin >> m[l][c];
		}
		cout << "\n";	
	}
	
	for (int l = 0; l < 4; l++) {
		for (int c = 0; c < 8; c++) {
			s[l] = s[l] + m[l][c];
		}
	}
		
	// Apresentação dos resultados 
	cout << "\nMatriz formada: \n\n";
	for (int l = 0; l < 6; l++) {
		for (int c = 0; c < 6; c++) {
			cout << m[l][c] << "\t";
		}	
		cout << "\n";	 
	}
	
	cout << "\n\n";
	for (int i = 0; i < 8; i++) {
		cout << "\nSoma dos valores da " << (i + 1) << ".a linha: " << s[i];
	}
}