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
    cout << "O segundo limite deve ser MAIOR que o primeiro\n";
    cout << "Digite o primeiro limite: ";
    cin >> n;
    cout << "Digite o segundo limite: ";
    cin >> m;
    
    if (m < n) {
    	cout << "O segundo limite deve ser MAIOR que o primeiro\n";
	    cout << "Digite o primeiro limite: ";
	    cin >> n;
	    cout << "Digite o segundo limite: ";
	    cin >> m;
	}
    
    i = n;
    // Laço de repetição para a tabuada
    while (i <= m) {
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
		c = 0;    	
    	while (c <= 10) {
    		// Apresentação dos resultados        
        	cout << "\n\t " << i << " x " << c << " = " << i * c;
        	c++;
		}
		i++;
    }    
}
