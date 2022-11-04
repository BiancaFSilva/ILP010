#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int i = 10, n;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação   
    while (i <= 20) {
    	n = 0;
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
    	while (n <= 10) {
    			// Apresentação dos resultados        
        	cout << "\n\t " << i << " x " << n << " = " << i * n;        	
        	n++;
		}
		i++;
	}
}
