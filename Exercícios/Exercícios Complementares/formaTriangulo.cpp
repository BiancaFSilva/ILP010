#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n, n1, n2;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Digite trwes numeros inteiros para foprmar um triangulo\n";
    cout << "Digite o primeiro numero: ";
    cin >> n; 
	cout << "Digite o segundo numero: ";
    cin >> n1;
	cout << "Digite o terceiro numero: ";
    cin >> n2;   
	
	if ((n < (n1 + n2)) & (n1 < (n + n2)) & (n2 < (n + n1))) {
		
		cout << "\nOs numeros apresentados formam um triangulo"; 
	} else {
		cout << "\nOs numeros apresentados nao formam um triangulo"; 
	}     
}
