#include <iostream>
#include <string>
using namespace std;

void cabecalho() {
	cout << "Fatec S�o Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programa��o\n";
	cout << "Bianca Let�cia Floriano da Silva\n\n\n";
}

int contaCaractere (char *aux) {
	int i = 0;
	
	while (aux[i] != '\0') { i++; }
	return i;
}

	int main () {
	// Declara��o de vari�veis
	char frase[100], op;
	int tamanho, aux, nA, nE, nI, nO, nU;
	
	// In�cio da l�gica de programa��o
	do {
		nA = 0, nE = 0, nI = 0, nO = 0, nU = 0;
		
		// Cabe�alho
		cabecalho();
		
		cout << "Digite uma frase: ";
		cin >> frase;
		
		tamanho = contaCaractere(frase);
		
		while (frase[0] == '\0' || tamanho > 100) {
			cout << "Dados invalidos! Digite uma nova frase: ";
			cin >> frase;
			
			tamanho = contaCaractere(frase);
		}
		
		for (aux = 0; aux < tamanho; aux++) {
			if (frase[aux] == 'A' || frase[aux] == 'a') {
				nA++;
			} else if (frase[aux] == 'E' || frase[aux] == 'e') {
				nE++;
			} else if (frase[aux] == 'I' || frase[aux] == 'i') {
				nI++;
			} else if (frase[aux] == 'O' || frase[aux] == 'o') {
				nI++;
			} else if (frase[aux] == 'U' || frase[aux] == 'u') {
				nI++;
			}
		}
		
			// Apresenta??o dos resultados
		cout << "\n\nA frase \"" << frase << "\" possui: ";
		cout << "\nLetras A: " << nA;
		cout << "\nLetras E: " << nE;
		cout << "\nLetras I: " << nI;
		cout << "\nLetras O: " << nO;
		cout << "\nLetras U: " << nU;
		
		cout << "\n\nDeseja inserir outra frase? (S/N) ";
		cin >> op;
		
		while (op != 'S' && op != 's' && op != 'N' && op != 'n') {
			cout << "Dados invalidos! Deseja inserir outra frase? (S/N) ";
			cin >> op;
		}
		system("cls");
	} while (op == 'S' || op == 's');
}
