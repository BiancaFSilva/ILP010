#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n, n1, n2;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite tres numeros inteiros diferentes\n";
    cout << "Digite o primeiro numero: ";
    cin >> n; 
	cout << "Digite o segundo numero: ";
    cin >> n1;
	cout << "Digite o terceiro numero: ";
    cin >> n2;   
	
	if (n < n1 && n < n2) {
		if (n1 < n2) {
			cout << "\nEm ordem crescente: " << n << ", " << n1 << " e " << n2; 
		} else {
			cout << "\nEm ordem crescente: " << n << ", " << n2 << " e " << n1; 
		}
	} else if (n1 < n && n1 < n2) {
		if (n < n2) {
			cout << "\nEm ordem crescente: " << n1 << ", " << n << " e " << n2; 
		} else {
			cout << "\nEm ordem crescente: " << n1 << ", " << n2 << " e " << n; 
		}
	} else if (n2 < n && n2 < n1) {
		if (n < n1) {
			cout << "\nEm ordem crescente: " << n2 << ", " << n << " e " << n1; 
		} else {
			cout << "\nEm ordem crescente: " << n2 << ", " << n1 << " e " << n; 
		}
	}    
}
