#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n, m, i, c;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o   
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
    // La�o de repeti��o para a tabuada
    while (i <= m) {
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
		c = 0;    	
    	while (c <= 10) {
    		// Apresenta��o dos resultados        
        	cout << "\n\t " << i << " x " << c << " = " << i * c;
        	c++;
		}
		i++;
    }    
}
