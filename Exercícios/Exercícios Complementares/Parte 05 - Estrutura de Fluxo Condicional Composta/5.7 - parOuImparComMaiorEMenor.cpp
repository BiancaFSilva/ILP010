#include <iostream>
using namespace std;

int main() {
    // Declara��o de vari�veis
    int n;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Informe um numero inteiro: ";
    cin >> n;

    // Apresenta��o dos resultados 
    if (n % 2 == 1) {       
        if (n < 50) {
            cout << "\nEsse numero e impar e menor que 50";
        } else {
        	cout << "\nEsse numero e impar e maior que 50";
		}
    } else {       
        if (n > 15) {
            cout << "\nEsse numero e impar e maior que 15";
        } else {
        	cout << "\nEsse numero e impar e menor que 15";
		}
    }
}
