#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float maior (float n[5]) {
	float m = 0;
	
	for (int i = 0; i < 5; i++) {
		if (n[i] > m) {
			m = n[i];
		}
	}
	
	return m;
}

int main() {
	// Declaração das variáveis
	float n[5], m;
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int i = 0; i < 5; i++) {
		cout << "Digite o " << (i + 1) << ".o elemento do vetor: ";
		cin >> n[i];
	}
	
	m = maior(n);	
	
	// Apresentação dos resultados 
	cout << "\nO maior numero do vetor e: " << m;
}