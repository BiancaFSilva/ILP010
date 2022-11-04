#include <iostream>
using namespace std;

int main() {
    float c = 50, f;
    
        // Cabeï¿½alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // Inï¿½cio da lï¿½gica de programaï¿½ï¿½o
    while (c <= 65) {
    	f = (9 * c + 160) / 5;
    	
    	cout << "\t" << c << " C = " << f << " F \n";
    	c++;
	}
}
