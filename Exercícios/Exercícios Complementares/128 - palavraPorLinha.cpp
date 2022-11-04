
#include <iostream>
#include <string.h>
using namespace std;

void cabecalho() {
	cout << "Fatec São Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programação\n";
	cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main () {
	// Declaração de variáveis
	char f[60], op;
	
	// Início da lógica de programação
	do {
		system("cls");
			
		// Cabeçalho
		cabecalho();
		
		cout << "Digite uma frase: ";
		cin >> f;
			
		// Apresenta??o dos resultados
		for (int i = 0; i < strlen(f); i++) {
			if (f[i] == ' ') {
				cout << "\n";
			} else {
				cout << f[i];
			}
		}
				
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
		
		getchar();
	} while (op == 'S' || op == 's');
}
