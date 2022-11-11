#include <iostream>
#include <string.h>
using namespace std;

void cabecalho() {
	cout << "Fatec S�o Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programa��o\n";
	cout << "Bianca Let�cia Floriano da Silva\n\n\n";
}

int main () {
	// Declara��o de vari�veis
	char p[60], op;
	int tamanho;
	
	// In�cio da l�gica de programa��o
	do {		
		// Cabe�alho
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
