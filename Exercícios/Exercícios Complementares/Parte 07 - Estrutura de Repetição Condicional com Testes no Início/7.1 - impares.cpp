#include <iostream>
using namespace std;

int main() {
    // Declara��o de vari�veis
    int n, i;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Informe um numero inteiro: ";
    cin >> n;

    // Apresenta��o dos resultados 
    if (n % 2 == 0) {       
        n = n - 1;
    }
	
	for (i = n; i >= 1; i = i - 2) {
		cout << i << " ";
	}
}
