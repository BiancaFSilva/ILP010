#include <iostream>
using namespace std;

int main() {
    float c = 50, f;
    
        // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Let�cia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    while (c <= 65) {
    	f = (9 * c + 160) / 5;
    	
    	cout << "\t" << c << " C = " << f << " F \n";
    	c++;
	}
}
