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
	int tamanho, resp, i;
	
	// Início da lógica de programação
	do {
		resp = 0;
		
		// Cabeçalho
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
