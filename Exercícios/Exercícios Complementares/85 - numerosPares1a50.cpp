
#include <iostream>
using namespace std;

int main() {
    // Declara??o de vari?veis
    int i = 2;

    // Cabe?alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // In?cio da l?gica de programa??o
    cout << " Numeros pares entre 1 e 50: \n";
    do {
    	// Apresenta??o dos resultados 
    	cout << " " << i;
    	i = i + 2;
	} while (i <= 48);
}
