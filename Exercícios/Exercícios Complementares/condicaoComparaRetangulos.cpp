#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int b, h, a, a1;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Digite a base do primeiro retangulo (em cm): ";
    cin >> b;
    cout << "Digite a altura do primeiro retangulo (em cm): ";
    cin >> h;
    a = b * h; 

    cout << "\nDigite a base do segundo retangulo: ";
    cin >> b;
    cout << "Digite a altura do segundo retangulo: ";
    cin >> h;
    a1 = b * h; 

    // Comparacao e apresenta��o dos resultados  
    if (a > a1) {
        cout << "\n\nO primeiro retangulo e maior";
        cout << "\nA area do primeiro retangulo e de " << a << "cm.";
    	cout << "\nA area do segundo retangulo e de " << a1 << "cm.\n\n";
    } else if (a < a1) {
        cout << "\n\nO segundo retangulo e maior";
        cout << "\nA area do primeiro retangulo e de " << a << "cm.";
    	cout << "\nA area do segundo retangulo e de " << a1 << "cm.\n\n";
    } else {
        cout << "\n\nAmbos possuem uma area equivalente";
    }
}
