#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    float d, v;
    float m = 3.50;
    int b, t;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Atencao a taxa minima por corrida e de R$ " << m;
    cout << "\n\nInforme um numero da bandeira (1 ou 2): ";
    cin >> b;
    cout << "Informe a distancia percorrida em quilometros: ";
    cin >> d;

    // Definicao da bandeira
    if (b == 1) {
        v = 1.8 * d;
    } else if (b == 2) {
        v = 2.3 * d;
    }

    cout << "O taxi oferecia um desconto de 30%? (1 - Sim / 2 - Nao) ";
    cin >> t;

    if (t == 1) {
        v = v * 0.7;
    } 

    if (v < m) {
        v = m;
    }

    // Apresenta��o dos resultados        
    cout << "\nA corrida custou ao todo R$ " << v;
}
