// Escreva um programa em C que apresente a tabuada do número 3,

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int resp;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    for (int i = 1; i <= 10; i++) {
        resp = 3 * i;

        // Apresentação dos resultados
        cout << "3 x " << i << " = " << resp;
    }    
}