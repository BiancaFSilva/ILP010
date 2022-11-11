#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float menor (float n[3]) {
	float m = 10;
	
	for (int i = 0; i < 3; i++) {
		if (n[i] < m) {
			m = n[i];
		}
	}
	
	return m;
}

int main() {
	// Declaração das variáveis
	float n[10][3];
	float m[10];
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int l = 0; l < 10; l++) {
		cout << "\nInforme as notas do " << (l + 1) << ".o aluno \n";
		for (int c = 0; c < 3; c++) {
			cout << (c + 1) << ".a nota: ";
			cin >> n[l][c];
			
			while (n[l][c] < 0 || n[l][c] > 10) {
				cout << "\nValor incorreto! Digite novamente a " << (c + 1) << ".a nota: ";
				cin >> n[l][c];
			}
		}
		
		m[l] = menor(n[l]);
	}
		
	// Apresentação dos resultados 
	cout << "\n\nRESUMO";
	for (int i = 0; i < 10; i++) {
		cout << "\nA menor nota do " << (i + 1) << ".o aluno e: " << m[i];
	}	
}
