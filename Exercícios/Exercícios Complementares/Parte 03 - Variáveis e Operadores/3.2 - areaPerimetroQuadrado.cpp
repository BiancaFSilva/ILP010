#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int l, a, p;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite o lado da figura (em cm): ";
    cin >> l;

    // Cálculos
    a = l * l;  
    p = l * 4;

    // Apresentação dos resultados
    cout << "\n\nA area do quadrado formado equivale a: " << a << "cm. ";
    cout << "\nO perimetro da figura e de: " << p << "cm. ";
}