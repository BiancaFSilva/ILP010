/*  Escreva um programa que informe o valor de uma corrida de taxi. Para calcular o valor da corrida é necessário saber a distância percorrida em quilômetros e qual o tipo da bandeira da corrida, 1 ou 2. 
    • Caso a bandeira seja 1, o preço do quilometro percorrido é de R$ 1,80
    • Caso a bandeira for 2, o valor é de R$ 2,30.  */

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    float d, v, corrida;
    int b;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe um numero da bandeira (1 ou 2): ";
    cin >> b;
    cout << "Informe a distancia percorrida em quilometros: ";
    cin >> d;

    // Calculo da bandeira
    if (b == 1) {
        v = 1.8;
    } else if (b == 2) {
        v = 2.3;
    }

    // Calculo do preço da corrida
    corrida = d * v;

    // Apresentação dos resultados        
    cout << "\nA corrida custou ao todo R$ " << corrida;
}