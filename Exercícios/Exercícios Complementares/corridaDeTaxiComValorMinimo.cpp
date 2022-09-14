/*  Escreva um programa para informar o valor de uma corrida de taxi que considere o valor mínimo da corrida. 
    Ou seja, ao entrar no taxi, o cliente deve pagar um valor mínimo de R$ 3,50, mesmo que o tamanho da corrida seja inferior a esse valor.   */

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    float d, v, corrida;
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
        v = 1.8;
    } else if (b == 2) {
        v = 2.3;
    }

    // Calculo do preço da corrida
    corrida = d * v;

    if (corrida < m) {
        corrida = m;
    }

    // Apresentação dos resultados        
    cout << "\nA corrida custou ao todo R$ " << corrida;
}