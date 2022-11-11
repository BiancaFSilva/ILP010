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
	char f[100], op;
	
	// Início da lógica de programação
	do {		
		// Cabeçalho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Utilize \"_\" para dar espaço entre as palavras\n";
		cout << "Digite uma frase: ";
		gets(f);
		
		for (int i = 0; i <= 100; i++) {
			if (f[i] == 'A' || f[i] == 'a') {
				f[i] = '2';
			} else if (f[i] == 'E' || f[i] == 'e') {
				f[i] = '3';
			} else if (f[i] == 'I' || f[i] == 'i') {
				f[i] = '4';
			} else if (f[i] == 'O' || f[i] == 'o') {
				f[i] = '5';
			} else if (f[i] == 'U' || f[i] == 'u') {
				f[i] = '6';
			}
		}
			
		// Apresenta??o dos resultados
		cout << "\nA frase codificada e: \n" << f; 
				
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
	} while (op == 'S' || op == 's');
}
