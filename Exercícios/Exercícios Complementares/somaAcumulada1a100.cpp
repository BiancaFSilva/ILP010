#include <iostream>
using namespace std;

int main() {
    // Declara��o de vari�veis
    int i = 1, soma = 0;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    while (i <= 100) {    	
    	soma = soma + i;
    	i++;
	}
	// Apresenta��o dos resultados 
	cout << "A soma acumulada entre os valores de 1 a 100 e: " << soma;
}
