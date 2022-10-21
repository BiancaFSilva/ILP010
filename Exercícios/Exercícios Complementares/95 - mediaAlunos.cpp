#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float media (float a, float b, float c) {
	b = 2 * b;
	c = 2 * c;
	
	return ((a + b + c) / 5);
}

int main () {
    // Declaração de variáveis
    float n1, n2, n3;

    // Cabeçalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    do {
    	cout << "Digite a primeira nota: ";
    	cin >> n1;
	} while (n1 < 0 || n1 > 10);
	
	do {
    	cout << "Digite a segunda nota: ";
    	cin >> n2;
	} while (n2 < 0 || n2 > 10);
	
	do {
    	cout << "Digite a terceira nota: ";
    	cin >> n3;
	} while (n3 < 0 || n3 > 10);
	
	// Apresenta??o dos resultados 
	cout << "\nA media aritmetica e: " << media(n1, n2, n3);
}
