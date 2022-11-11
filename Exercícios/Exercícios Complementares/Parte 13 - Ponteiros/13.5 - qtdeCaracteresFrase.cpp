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
	char *pnt, f[50], op;
	int qtde, tamanho;	
	
	do {
		//Cabecalho
		system("cls");
	    cabecalho();
			
		// In?cio da lógica de programação
		pnt = &f[0];
		qtde = 0;

		cout << "Digite uma frase: ";
		gets(f);		
		
		tamanho = strlen(f);
		
		while ((f[0] == '\0') || tamanho > 100) {
			cout << "Dados incorretos! Digite uma frase: \n";
			gets(f);
			
			tamanho = strlen(f);
		}
		
		for (int i = 0; i < 50; i++) {
			if (*pnt == '\0') {
				break;
			}
			
			qtde++;
			pnt++;
		}
						
		// Apresentação dos resultados 
		pnt = &f[0];
		cout << "\nA frase informada foi: \n";
		
		for (int i = 0; f[i] != '\0'; i++) {
			cout << *pnt;
			pnt++;
		}
		 cout << "\n\nEssa frase tem " << qtde << " caracteres";
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
	} while (op == 'S' || op == 's');
}
