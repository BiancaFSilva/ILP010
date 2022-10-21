#include <iostream>
using namespace std;

int main() {
    // Declara??o de vari?veis
    int n;

    // Cabe?alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In?cio da l?gica de programa??o
    do {
    	cout << "Informe um numero inteiro positivo: ";
	    cin >> n;
	} while (n <= 3);
	    
	// Apresenta??o dos resultados 
	cout << "\nOs numeros impares menores que " << n << " sao: \n";
	
	if (n % 2 == 0) {       
		n--;
	} else {
	    n = n - 2;
	}
		
	do {
		cout << n << " ";
		n = n - 2;
	} while (n >= 3);
}
