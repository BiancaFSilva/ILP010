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
	char f[30], v[60], op;
	int i, n, c, aux;
	
	// In�cio da l�gica de programa��o
	do {		
		// Cabe�alho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite uma frase: ";
		gets(f);
		
		for (i = 0, c = 0, aux = 0; i <= 30; i++, c++) {
			if (f[i] != ' ' && f[i] != '\0') {
				f[c] = f[i];
			} else if (v[c - 1] != '\0') {
				for (n = aux; n < i; c++, n++) {
					v[c] = f[n];
					v[c] = f[i];
					
					aux = i + 1;
				}
			} 
		}
			
		// Apresenta??o dos resultados
		cout << "\nA frase digitada e: \n " << v; 
				
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
		
		getchar();
	} while (op == 'S' || op == 's');
}
