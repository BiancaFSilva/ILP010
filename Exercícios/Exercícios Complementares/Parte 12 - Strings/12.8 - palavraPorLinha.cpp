
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
	char f[60], op;
	
	// In�cio da l�gica de programa��o
	do {
		// Cabe�alho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Utilize \"_\" para dar espa�o entre as palavras\n";
		cout << "Digite uma frase: ";
		gets(f);
			
		// Apresenta??o dos resultados
		for (int i = 0; i < strlen(f); i++) {
			if (f[i] == ' ' || f[i] == '_') {
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
