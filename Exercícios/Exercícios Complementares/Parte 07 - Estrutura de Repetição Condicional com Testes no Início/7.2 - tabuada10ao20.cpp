#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int i = 10, n;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o   
    while (i <= 20) {
    	n = 0;
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
    	while (n <= 10) {
    			// Apresenta��o dos resultados        
        	cout << "\n\t " << i << " x " << n << " = " << i * n;        	
        	n++;
		}
		i++;
	}
}
