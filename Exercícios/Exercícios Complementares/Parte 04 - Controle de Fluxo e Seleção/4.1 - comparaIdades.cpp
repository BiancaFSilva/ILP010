#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int iPedro, iJoana;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "As idades informadas NAO podem ser iguais";
    cout << "\n\nDigite a idade do Pedro: ";
    cin >> iPedro;
    cout << "Digite a idade da Joana: ";
    cin >> iJoana;

    // Apresentação dos resultados    
    if (iPedro > iJoana) {
        cout << "\nPedro e o mais velho entre eles";  
    } else {
        cout << "\nJoana e a mais velha entre eles";
    }  
}