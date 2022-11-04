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
	float n[6];
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int i = 0; i < 6; i++) {
		cout << "Digite o " << (i + 1) << ".o numero: ";
		cin >> n[i];
	}
		
	// Apresentação dos resultados 
	cout << "\nOs numeros na ordem inversa sao: \n";
	
	for (int i = 5; i >= 0; i--) {
		cout << n[i] << " ";
	}
}