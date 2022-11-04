#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int b, h, a, a1;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
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

    // Comparacao e apresentação dos resultados  
    cout << "\n\nA area do primeiro retangulo e de " << a << "cm.";
    cout << "\nA area do segundo retangulo e de " << a1 << "cm.\n\n";

    if (a > a1) {
        cout << "O primeiro retangulo e maior";
    } else if (a < a1) {
        cout << "O segundo retangulo e maior";
    } else {
        cout << "Ambos possuem uma area equivalente";
    }
}