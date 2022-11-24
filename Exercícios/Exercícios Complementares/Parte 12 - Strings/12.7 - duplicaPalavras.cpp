#include <iostream>
#include <string.h>
using namespace std;

void cabecalho() {
	cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
	cout << "Bianca Leticia Floriano da Silva\n\n\n";
}

int main () {
	// Declaração de variáveis
	char frase[30],frasef[60], op;
	int cont, cont2, contff, auxcont;
	
	// Início da lógica de programação
	do {	
		// Cabeçalho
		system("cls");
		fflush(stdin);
		cabecalho();
		
		cout << "Digite uma frase: ";
		gets(frase);
		
		for (cont = 0, contff = 0, auxcont = 0; cont < 30; cont++, contff++) {
			if ((frase[cont] != ' ') && (frase[cont] != '\0')) {
				frasef[contff] = frase[cont];
			} else if (frasef[contff - 1] != '\0') {
				for(cont2 = auxcont; cont2 < cont; contff++, cont2++) 
					frasef[contff] = frase[cont2];
					frasef[contff] = frase[cont];
					auxcont = cont + 1;			
			}
		}
			
		// Apresenta??o dos resultados
		cout << "\nA frase digitada e: \n" << frasef; 
				
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}		
		getchar();
	} while (op == 'S' || op == 's');
}
