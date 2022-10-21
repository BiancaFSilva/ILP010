#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n, m, i, c;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação   
    do {
    	cout << "O segundo limite deve ser MAIOR que o primeiro\n";
	    cout << "Digite o primeiro limite: ";
	    cin >> n;
	    cout << "Digite o segundo limite: ";
	    cin >> m;
	} while (n >= m);
    
    i = n;
    // Laço de repetição para a tabuada
    do {
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
		c = 1;    	
    	while (c <= 10) {
    		// Apresentação dos resultados        
        	cout << "\n\t " << i << " x " << c << " = " << i * c;
        	c++;
		}
		
		i++;
    } while (i <= m);    
}
