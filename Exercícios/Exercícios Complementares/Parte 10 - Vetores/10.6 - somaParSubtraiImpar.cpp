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
	int soma = 0, sub = 0;
	int n[10];
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int i = 0; i < 10; i++) {
		cout << "Digite o " << (i + 1) << ".o numero: ";
		cin >> n[i];
		
		if (n[i] % 2 != 0) {
			sub -= n[i];
		} else {
			soma += n[i];
		}
	}
		
	// Apresentação dos resultados 
	cout << "\nA soma dos numeros pares e: " << soma;	
	cout << "\nA subtracao dos numeros impares e: " << sub;	

}