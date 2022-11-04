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
	int n[12], np[12], ni[12];
	int par = 0, impar = 0;
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int i = 0; i < 12; i++) {
		cout << "Digite o " << (i + 1) << ".o numero: ";
		cin >> n[i];
		
		if (n[i] % 2 == 0) {
			np[par] = n[i];
			par++;
		} else {
			ni[impar] = n[i];
			impar++;
		}
	}
		
	// Apresentação dos resultados 
	cout << "\nOs numeros pares sao: \n";	
	for (int i = 5; i >= 0; i--) {
		cout << np[i] << " ";
	}
	
	cout << "\nOs numeros impares sao: \n";	
	for (int i = 5; i >= 0; i--) {
		cout << ni[i] << " ";
	}
}