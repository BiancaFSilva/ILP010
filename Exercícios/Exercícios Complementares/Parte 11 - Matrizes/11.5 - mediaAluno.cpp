#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float validacao (float r[4]) {	
	float s = 0;
	
	for (int i = 0; i < 4; i++) {
		s += r[i];
	}

	return ((s / 4) >= 7);
}

int main() {
	// Declaração das variáveis
	float n[3][4];	
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	for (int l = 0; l < 3; l++) {
		cout << "Informe as notas do " << (l + 1) << ".o aluno \n";
		for (int c = 0; c < 4; c++) {
			cout << (c + 1) << ".a nota: ";
			cin >> n[l][c];
			
			while (n[l][c] < 0 || n[l][c] > 10) {
				cout << "\nValor incorreto! Digite novamente a " << (c + 1) << ".a nota: ";
				cin >> n[l][c];
			}
		}
		cout << "\n";	
	}
	
	// Apresentação dos resultados 
	for (int i = 0; i < 3; i++) {
		if (validacao(n[i]) == true) {
			cout << "\nO " << (i + 1) << ".o aluno foi aprovado";
		} else {
			cout << "\nO " << (i + 1) << ".o aluno foi reprovado";
		}
	}
}
		