#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int maior (int a, int b, int c) {
	if ((a == b) && (b == c)) {
		return 0;
	} else if ((a > b) && (a > c)) {
        return a;
    } else if ((b > a) && (b > c)) {
        return b;
    } else if ((c > a) && (c > b)) {
        return c;
    }
}

int menor (int a, int b, int c) {
	if ((a == b) && (b == c)) {
		return 0;
	} else if ((a < b) && (a < c)) {
        return a;
    } else if ((b < a) && (b < c)) {
        return b;
    } else if ((c < a) && (c < b)) {
        return c;
    }
}

int main () {
    // Declaração de variáveis
    int i, id, idd, maiorIdade, menorIdade;

    // Cabeçalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite a primeira idade: ";
    cin >> i;
    cout << "Digite a segunnda idade: ";
    cin >> id;
    cout << "Digite a terceira idade: ";
    cin >> idd;
    
    maiorIdade = maior(i, id, idd);
    menorIdade = menor(i, id, idd);
	
	// Apresenta??o dos resultados 
	if (maiorIdade == 0) {
		cout << "\nAs idades sao iguais";
	} else {
		cout << "\nA maior idade e: " << maiorIdade;
		cout << "\nA menor idade e: " << menorIdade;
	}	
}
