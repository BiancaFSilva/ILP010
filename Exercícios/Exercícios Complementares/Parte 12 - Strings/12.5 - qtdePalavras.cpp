#include <iostream>
#include <string.h>
using namespace std;

void cabecalho() {
	cout << "Fatec S?o Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programa??o\n";
	cout << "Bianca Let?cia Floriano da Silva\n\n\n";
}

int main () {
	// Declara??o de vari?veis
	char f[50], op;
	int aux;
	
	// In?cio da l?gica de programa??o
	do {		
		aux = 1;
			
		// Cabe?alho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite uma frase: ";
		gets(f);
		
		for (int i = 0; i <= 50; i++) {
			if (f[i] == ' ' || f[i] == '_') {
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
	} while (op == 'S' || op == 's');
}
