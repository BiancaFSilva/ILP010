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
	char frase[60], frase2[60], op;
	int i, tamanho, qtde1, qtde2;
	
	// Início da lógica de programação
	do {
		tamanho = 0;
		
		// Cabeçalho
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
			cout << "\nAs frases são iguais \n" << frase;
		} else {
			cout << "\nAs frases são diferentes \n" << frase << "\n" << frase2;
		}
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;	
	} while (op == 'S' || op == 's');
}
