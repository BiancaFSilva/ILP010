#include <iostream>
#include <string>
using namespace std;

void cabecalho() {
	cout << "Fatec São Caetano do Sul - Antonio Russo\n";
	cout << "ADSMA2, ILP010 - Linguagem de Programação\n";
	cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int contaCaractere (char *aux) {
	int i = 0;
	
	while (aux[i] != '\0') { i++; }
	return i;
}

	int main () {
	// Declaração de variáveis
	char frase[100], op;
	int tamanho, aux, nA, nE, nI, nO, nU;
	
	// Início da lógica de programação
	do {
		nA = 0, nE = 0, nI = 0, nO = 0, nU = 0;
		
		// Cabeçalho
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
