#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float verNota (float n[4]) {
	float maior = 0, menor = 10;
	
	for (int i = 0; i < 5; i++) {
		if (n[i] > maior) {	maior = n[i]; }
		if (n[i] < menor) {	menor = n[i]; }
	}
	
	// Apresentação dos resultados 
	cout << "\nA maior nota foi " << maior << " e a menor nota foi " << menor;
}

int main() {
	// Declaração das variáveis
	float n[5];
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int i = 0; i < 4; i++) {
		cout << "Informe a nota do " << (i + 1) << ".o aluno: ";
		cin >> n[i];
	}

	// Verifica e apresenta os resultados 
	verNota(n);
}