#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n, m;

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
    
    // La�o de repeti��o para a tabuada
    for (int i = n; i <= m; i++) {
    	cout << "\n\n\tTABUADA DO " << i << "\n";
    	
    	for (int c = 1; c <= 10; c++) {
    		// Apresenta��o dos resultados        
        	cout << "\n\t " << i << " x " << c << " = " << i * c;
		}
    }    
}
