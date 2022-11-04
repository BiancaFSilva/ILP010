#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    float d, v, corrida;
    float m = 3.50;
    int b, t;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Atencao a taxa minima por corrida e de R$ " << m;
    cout << "\n\nInforme um numero da bandeira (1 ou 2): ";
    cin >> b;
    cout << "Informe a distancia percorrida em quilometros: ";
    cin >> d;

    // Definicao da bandeira
    if (b == 1) {
        v = 1.8;
    } else if (b == 2) {
        v = 2.3;
    }

    // Calculo do preço da corrida
    corrida = d * v;

    cout << "\n\nO taxi oferecia um desconto de 30%? (1 - Sim / 2 - Nao) ";
    cin >> t;

    if (t == 1) {
        corrida = corrida * 0.7;
    } 

    if (corrida < m) {
        corrida = m;
    }

    // Apresentação dos resultados        
    cout << "\nA corrida custou ao todo R$ " << corrida;
}