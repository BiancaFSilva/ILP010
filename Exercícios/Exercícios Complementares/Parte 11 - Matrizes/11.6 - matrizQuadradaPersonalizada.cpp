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
	int d, dP = 0, dS = 0;
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	cout << "Informe a dimensao deseja para a matriz quadrada: ";
	cin >> d;
	
	int m[d][d];
	
	for (int l = 0; l < d; l++) {
		cout << "Informe os elementos da " << (l + 1) << ".a linha \n";
		for (int c = 0; c < d; c++) {
			cout << "Informe o valor da " << (c + 1) << ".a coluna: ";
			cin >> m[l][c];
			
			if (l == c) { dP += m[l][c]; }
		}
		cout << "\n";
	}
	
	for (int i = 0; i < d; i++) { 
		dS += m[i][d - i - 1]; 
	}
		
	// Apresentação dos resultados 
	cout << "\nMatriz formada: \n\n";
	for (int l = 0; l < d; l++) {
		for (int c = 0; c < d; c++) {
			cout << m[l][c] << "\t";
		}	
		cout << "\n";	 
	}
	
	cout << "\nA soma da diagonal principal menos a soma da diagonal secundaria e: " << (dP - dS);
}
