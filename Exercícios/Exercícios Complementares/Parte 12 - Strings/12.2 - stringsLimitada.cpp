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
	char frase[60], frase2[60], op;
	int i, tamanho, qtde1, qtde2;
	
	// In�cio da l�gica de programa��o
	do {
		tamanho = 0;
		
		// Cabe�alho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite a primeira frase: ";
		gets(frase);
		cout << "Digite a segunda frase: ";
		gets(frase2);
		
		qtde1 = strlen(frase);
		qtde2 = strlen(frase2);
		
		if (qtde1 == qtde2) {
			for (int i = 0; i < qtde1; i++) {
				if (frase[i] == frase2[i]) {
					tamanho++;
				} else {
					break;
				}
			}
		}
		
		// Apresenta??o dos resultados
		if (qtde2 == tamanho ) {
			cout << "\nAs frases s�o iguais \n" << frase;
		} else {
			cout << "\nAs frases s�o diferentes \n" << frase << "\n" << frase2;
		}
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;	
	} while (op == 'S' || op == 's');
}
