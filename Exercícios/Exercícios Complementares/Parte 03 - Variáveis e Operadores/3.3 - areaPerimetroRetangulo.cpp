#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int b, h, a, p;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite o valor da base da figura (em cm): ";
    cin >> b;
    cout << "Digite a altura do retangulo (em cm): ";
    cin >> h;

    // Cálculos
    a = b * h;  
    p = (b * 2) + (h * 2);

    // Apresentação dos resultados
    cout << "\n\nA area do retangulo formado equivale a: " << a << "cm. ";
    cout << "\nO perimetro da figura e de: " << p << "cm. ";
}