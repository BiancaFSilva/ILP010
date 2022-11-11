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
	int tamanho, resp, i;
	
	// In�cio da l�gica de programa��o
	do {
		resp = 0;
		
		// Cabe�alho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite uma palavra: ";
		gets(p);
		
		tamanho = strlen(p);
		i = tamanho;
		
		for (int c = 0; c < tamanho; c++) {
			if (p[c] == p[i - 1]) {
				resp++;
			}
			i--;
		}
		
		// Apresenta??o dos resultados
		if (resp == tamanho) {
			cout << "A palavra \"" << p << "\" e um palindromo"; 
		} else {
			cout << "A palavra \"" << p << "\" nao e um palindromo"; 
		}
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}		
	} while (op == 'S' || op == 's');
}
