#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int r, h;
    float v;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe o raio da base do cilindro: ";
    cin >> r;
    cout << "Informe a altura do cilindro: ";
    cin >> h;

    // Calculo
    v = (3.14* ((r * r) * h));

    // Apresentação dos resultados 
    cout << "\n\nO volume do cilindro e de " << v;
}