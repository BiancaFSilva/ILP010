#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float validacao (float n, int c) {	
	while (n < 0 || n > 10) {
		if (n < 0) {
			cout << "Valor menor que zero! Digite novamente a " << (c + 1) << ".a nota: ";
			cin >> n;
		} else if (n > 10) {
			cout << "Valor acima de dez! Digite novamente a " << (c + 1) << ".a nota: ";
			cin >> n;
		}
	}
	
	return n;
}

int main() {
	// Declaração das variáveis
	float n[5][4];
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int l = 0; l < 5; l++) {
		cout << "\nInforme as notas do " << (l + 1) << ".o aluno \n";
		for (int c = 0; c < 4; c++) {
			cout << (c + 1) << ".a nota: ";
			cin >> n[l][c];
			
			n[l][c] = validacao(n[l][c], c);
		}
	}
		
	// Apresentação dos resultados 
	for (int l = 0; l < 5; l++) {
		cout << "\nAs notas do " << (l + 1) << ".o aluno sao: \n";
		for (int c = 0; c < 4; c++) {
			cout << "\n" << (c + 1) << ".a nota: " << n[l][c];
		}
	}	
}