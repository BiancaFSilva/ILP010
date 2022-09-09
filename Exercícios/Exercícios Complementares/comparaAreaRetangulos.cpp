// Desenvolva um programa para calcular e para comparar a área de dois retângulos A e B. O programa deverá informar qual retângulo possui a maior área ou se possuem tamanhos iguais. Dados de entrada: tamanho da base e da altura (tipo das variáveis: inteiro, valor em centímetros).

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
    cout << "Digite a base do primeiro retangulo: ";
    cin >> b;
    cout << "Digite a altura do primeiro retangulo: ";
    cin >> h;
    a = b * h; 

    cout << "Digite a base do segundo retangulo (em cm): ";
    cin >> b;
    cout << "Digite a altura do segundo retangulo (em cm): ";
    cin >> h;
    a1 = b * h; 

    // Comparacao e apresentação dos resultados  
    cout << "\n\nA area do primeiro retangulo e de " << a << "cm.";
    cout << "\nA area do segundo retangulo e de " << a1 << "cm.";

    if (a > a1) {
        cout << "O primeiro retangulo e maior";
    } else if (a < a1) {
        cout << "O segundo retangulo e maior";
    } else {
        cout << "Ambos possuem uma area equivalente";
    }
}