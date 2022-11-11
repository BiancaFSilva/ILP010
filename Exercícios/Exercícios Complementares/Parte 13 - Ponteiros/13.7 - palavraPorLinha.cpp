#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main() {
	// Declaração das variáveis
	char *pnt, f[60], op;
	
	do {
		//Cabecalho
		system("cls");
	    cabecalho();
			
		// In?cio da lógica de programação
		pnt = &f[0];

		cout << "Digite uma frase: ";
		gets(f);		
		
		while ((f[0] == '\0') || strlen(f) > 100) {
			cout << "Dados incorretos! Digite uma frase: \n";
			gets(f);
		}
		
		// Apresentação dos resultados 
		for (int i = 0; i < strlen(f); i++) {
			if (*pnt == ' ') {
				cout << "\n";
			} else {
				cout << *pnt;
			}
			
			pnt++;
		}


		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
	} while (op == 'S' || op == 's');
}
