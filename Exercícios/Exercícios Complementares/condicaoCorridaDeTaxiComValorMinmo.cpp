#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    float d, v;
    float m = 3.50;
    int b;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Atencao a TAXA MINIMA por corrida e de R$ " << m;
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

    if (v < m) {
        v = m;
    }

    // Apresentação dos resultados        
    cout << "\nA corrida custou ao todo R$ " << v;
}
