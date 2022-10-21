#include <iostream>
using namespace std;

int main() {
    // Declara??o de vari?veis
    int i = 1;
    float soma, div = 1;

    // Cabe?alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // In?cio da l?gica de programa??o
    do {    	
    	soma += (i / div);
    	i += 2;
    	div++;
	} while (div <= 50);
	
	// Apresenta??o dos resultados 
	cout << "A soma e: " << soma;
}
