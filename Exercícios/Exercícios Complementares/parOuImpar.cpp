// Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar.

#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int n;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe um numero inteiro: ";
    cin >> n;

    // Apresentação dos resultados 
    if (n % 2 == 1) {
        cout << "\n\nO numero " << n << " e impar";
    } else {
        cout << "\n\nO numero " << n << " e par";
    }
}