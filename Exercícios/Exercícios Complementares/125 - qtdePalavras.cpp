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
	char f[50], op;
	int aux;
	
	// Início da lógica de programação
	do {
		system("cls");
		aux = 1;
			
		// Cabeçalho
		cabecalho();
		
		cout << "Digite uma frase: ";
		cin >> f;
		
		for (int i = 0; i <= 0; i++) {
			if (f[i] == ' ') {
				aux++;
			}
		}
			
		// Apresenta??o dos resultados
		cout << "\nA frase \"" << f << "\" possui " << aux << " palavras"; 
				
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
		
		getchar();
	} while (op == 'S' || op == 's');
}
