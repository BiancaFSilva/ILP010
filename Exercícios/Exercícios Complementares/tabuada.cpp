// screva um programa em C que apresente a tabuada de um número qualquer

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int resp, num;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe um numero inteiro: ";
    cin >> num;

    cout << "\n\nTABUADA DO " << num << "\n";

    for (int i = 1; i <= 10; i++) {
        resp = num * i;

        // Apresentação dos resultados        
        cout << "\n\t " << num << " x " << i << " = " << resp;
    }    
}