#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Digite o primeiro numero inteiro: ";
    cin >> n; 

	
	if (n > 0) {
		cout << "\nO modulo do numero " << n << " e " << n; 
	} else if (n < 0) {
		cout << "\nO modulo do numero " << n << " e " << -n; 	
	}    
}
