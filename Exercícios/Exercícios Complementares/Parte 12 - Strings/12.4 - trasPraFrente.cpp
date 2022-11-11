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
	char p[60], op;
	int tamanho;
	
	// Início da lógica de programação
	do {		
		// Cabeçalho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite uma palavra: ";
		cin >> p;
		
		while (p[0] == '\0' || strlen(p) > 60) {
			cout << "Dados invalidos! Digite uma palavra valida: ";
			cin >> p;
		}
		
		tamanho = strlen(p);
			
		// Apresenta??o dos resultados
		cout << "\nA palavra \"" << p << "\" invertida e: "; 
		
		for (int i = tamanho; i >= 0; i--) {
			cout << p[i];
		}
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
	} while (op == 'S' || op == 's');
}
