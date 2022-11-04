#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int i, n;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o   
    for (i = 1; i <= 9; i++) {
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
    	for (n = 1; n <= 10; n++) {
    		// Apresenta��o dos resultados        
        	cout << "\n\t " << i << " x " << n << " = " << i * n;
		  }
    }    
}
