#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void cabecalho() {
	cout << "Fatec São Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programação\n";
	cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main () {
	// Declaração de variáveis
	char f[60], e[60], op;
	int aux, i, c;
	
	// Início da lógica de programação
	do {	
		// Cabeçalho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite uma frase: ";
		gets(f);
		
		for (i = 0, c = 0, aux = 0; i < 60; i++, c++) {
			if ((f[i] != ' ') && (f[i] != '\0')) {
				e[c] = f[i];
			} else if (e[c - 1] != '\0') {
				if (i - aux == 4) {
					e[aux + 1] = f[aux + 2];
					e[aux + 2] = f[aux + 1];
				} else if (i - aux == 5) {
					e[aux + 1] = f[aux + 3];
					e[aux + 3] = f[aux + 1];
				} else if (i - aux == 6) {
					e[aux + 1] = f[aux + 4];
					e[aux + 4] = f[aux + 1];
					e[aux + 2] = f[aux + 3];
					e[aux + 3] = f[aux + 2];
				} else if (i - aux == 7) {
					e[aux + 1] = f[aux + 5];
					e[aux + 5] = f[aux + 1];
					e[aux + 2] = f[aux + 4];
					e[aux + 4] = f[aux + 2];
				} else if (i - aux == 8) {
					e[aux + 1] = f[aux + 6];
					e[aux + 6] = f[aux + 1];
					e[aux + 2] = f[aux + 5];
					e[aux + 5] = f[aux + 2];
					e[aux + 3] = f[aux + 4];
					e[aux + 4] = f[aux + 3];
				} 
				
				e[c] = f[i];
				aux = i + 1;
			}
		}
			
		// Apresenta??o dos resultados
		cout << "\nA noma frase e: \n" << e; 
				
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
	} while (op == 'S' || op == 's');
}
